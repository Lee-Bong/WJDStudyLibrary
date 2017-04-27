//
//  JDKeyChainWapper.h
//  WJDStudyLibrary
//
//  Created by wangjundong on 2017/4/27.
//  Copyright © 2017年 wangjundong. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface JDKeyChainWapper : NSObject


/**
 save username and password to keychain
 
 @param identifier 数据的 id
 @param data 保存的数据
 @param accessGroup 数据的CroupID 需要证书配合,一般设置只为 nil,否则会无法访问 keychain

 */
+ (BOOL)savePassWordDataWithdIdentifier:(NSString *)identifier data:(id)data accessGroup:(NSString *) accessGroup;


/**
 load username and password from keychain
 
 @param identifier 数据的 id
 @return 保存的数据
 @param accessGroup 数据的CroupID 需要证书配合,一般设置只为 nil,否则会无法访问 keychain

 */
+ (id)loadPassWordDataWithIdentifier:(NSString *)identifier accessGroup:(NSString *) accessGroup;

/**
 delete username and password from keychain
 
 @param identifier 数据的 id
 @param accessGroup 数据的CroupID 需要证书配合,一般设置只为 nil,否则会无法访问 keychain

 */
+ (void)deletePassWordClassDataWithIdentifier:(NSString *)identifier accessGroup:(NSString *) accessGroup;

@end
