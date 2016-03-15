//
//  HttpsRequest.h
//  HttpsRequest
//
//  Created by steven_yang on 16/3/14.
//  Copyright © 2016年 steven_yang. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "AFNetworking.h"

typedef enum {
    HEADER_TYPE_CONTENT,
    HEADER_TYPE_LENGTH,
    HEADER_TYPE_LANGUAGE,
    HEADER_TYPE_ENCODING,
    HEADER_TYPE_AUTHORIZATION,
    HEADER_TYPE_USERAGENT,
}ENUM_HEADERTYPE ;

@interface HttpsRequest : NSObject

+(HttpsRequest *) sharedInstance;


/**
 *  发送一个POST请求
 *
 *  @param url     请求路径
 *  @param params  请求参数
 *  @param success 请求成功后的回调（请将请求成功后想做的事情写到这个block中）
 *  @param failure 请求失败后的回调（请将请求失败后想做的事情写到这个block中）
 */
- (void)post:(NSString *)url params:(NSDictionary *)params success:(void (^)(id responseObj))success failure:(void (^)(NSError *error))failure;

/**
 *  配置Header参数
 *  @param url  请求路径
 *  @param params 请求参数
 *  @param headers header字典
 *  @param success 请求成功后的回调（请将请求成功后想做的事情写到这个block中）
 *  @param failure 请求失败后的回调（请将请求失败后想做的事情写到这个block中）
 */

-(void)post:(NSString *)url params:(NSDictionary *)params headers:(NSDictionary *)headers success:(void (^)(id responseObj))success failure:(void (^)(NSError *error))failure;

-(AFSecurityPolicy *)customSecurityPolicy;



@end
