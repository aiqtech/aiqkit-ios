//
//  iQUserProfileUpdateRequest.h
//  AIQ
//
//  Created by Liyi Huang on 17/01/2018.
//  Copyright (c) 2018 AIQ Pte Ltd. All rights reserved.
//

#import "iQAPIRequest.h"

@interface iQUserProfileUpdateRequest : iQAPIRequest

@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, strong) NSString *password;
@property (nonatomic, strong) NSString *gender;
@property (nonatomic, strong) NSDate *birthday;
@property (nonatomic, strong) NSString *birthdayDate;
@property (nonatomic, strong) NSString *mobilePrefix;
@property (nonatomic, strong) NSString *mobileNumber;

- (void)runWithCompletionHandler:(void (^)(NSDictionary *userDictionary, NSString *errorMessage))handler;

@end
