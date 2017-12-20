//
//  tdNetwork.h
//  TenDollar
//
//  Created by Li Chen Liou on 2017/4/24.
//  Copyright © 2017年 Li Chen Liou. All rights reserved.
//

#import <AFNetworking/AFNetworking.h>
typedef void (^requestSuccessBlock)(NSDictionary *dic);
typedef void (^requestFailureBlock)(NSError *error);
typedef enum {
    GET,
    POST,
    PUT,
    DELETE,
    HEAD
} HTTPMethod;
@interface tdNetwork : AFHTTPSessionManager
+ (instancetype)sharedManager;
- (void)requestWithMethod:(HTTPMethod)method
                 WithPath:(NSString *)path
               WithParams:(NSDictionary*)params
         WithSuccessBlock:(requestSuccessBlock)success
          WithFailurBlock:(requestFailureBlock)failure;

-(instancetype)initWithBaseURL:(NSURL *)url;
@end
