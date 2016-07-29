//
//  CTAlipay.h
//  畅停
//
//  Created by wff on 15/9/10.
//  Copyright (c) 2015年 GuoNing. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CTAlipay : NSObject

+ (void)ct_alipay:(NSString *)payOrderString
  alipayFinish:(void(^)(NSDictionary *blockDic))alipayFinish;



/**
 *  9000:订单支付成功
 *  8000:正在处理中（"支付结果确认中"）  代表支付结果因为支付渠道原因或者系统原因还在等待支付结果确认，最终交易是否成功以服务端异步通知为准（小概率状态）
 *  4000:订单支付失败
 *  6001:用户中途取消
 *  6002:网络连接出错
 */
+ (void)ct_alipayState:(NSInteger)state;


/**
 *  支付宝是否绑定
 *
 *  @param array 数据
 *
 *  @return yes：绑定  no：未绑定
 */
+ (BOOL)ct_alipaySignStateArray:(NSArray *)array;


/**
 *  支付宝是否安装
 *
 *  安装了就跳转到支付宝 绑定代扣
 *
 *  @return BOOL
 */
+ (void)ct_alipayInstall;

@end
