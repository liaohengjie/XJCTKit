//
//  CTLogin.h
//  CTKit
//
//  Created by apple on 16/7/8.
//  Copyright © 2016年 GuoNing. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface CTLogin : NSObject


/**
 *  登录
 *
 *  @param loginName
 *  @param access_token
 *  @param appId
 *  @param success
 *  @param failure
 */
+ (void)ct_loginName:(NSString *)loginName
        access_token:(NSString *)access_token
               appId:(NSString *)appId
             success:(void (^)(void))success
             failure:(void (^)(NSError * error , NSString *errorMsg))failure;


/**
 *  退出
 */
+ (void)ct_logout;


/**
 *  检查是否登录
 *
 *  @param completion   loginState NO->未登录，YES->已登录
 */
+ (void)ct_checkLoginStateCompletion:(void (^) (BOOL loginState))completion;


/**
 *  进入SDK主页
 *
 *  @param vc           当前视图的vc
 *  @param amapApiKey   高德地图apikey http://lbs.amap.com/dev/
 */
+ (void)ct_pushMainVc:(UIViewController *)vc amapApiKey:(NSString *)amapApiKey;



@end
