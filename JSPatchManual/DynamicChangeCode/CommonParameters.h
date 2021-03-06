//
//  CommonParameters.h
//  jht
//
//  Created by apple on 16/8/18.
//  Copyright © 2016年 Xcode. All rights reserved.
//

//设置请求网络的域名
#define LOADURLS @"http://127.0.0.1:8080/jspatch_api"

//获取版本号
#define AppVersion [[[NSBundle mainBundle] infoDictionary] objectForKey: @"CFBundleShortVersionString"]

//加密串 与服务端keys.properties中存储的值一致
#define LOADKEYS @"4ziINomkm*5ujN2~6zi32n]."

//保存请求头version用的key
#define APPREQUESTVERSION @"version"

//保存请求到的内容所用的key
#define LOADCONTENT @"loadcontent"

#import <Foundation/Foundation.h>

@interface CommonParameters : NSObject

@end
