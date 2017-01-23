// Copyright (c) 2016 The tourism Authors. All rights reserved.
// user_opcode.h
// Created on: 2016年8月10日.
// Author: Paco.
#ifndef PLUGINS_USER_USER_OPCODE_H_
#define PLUGINS_USER_USER_OPCODE_H_

#include "pub/comm/comm_head.h"

namespace user {
#define PACKET_HEART_REQ 1000
	
#define USER_INFO_REQ USER_TYPE*1000 + 1
#define USER_INFO_RLY USER_TYPE*1000 + 2
	
#define ACCOUNT_INFO_REQ USER_TYPE*1000 + 3
#define ACCOUNT_INFO_RLY USER_TYPE*1000 + 4	

#define ORDER_LIST_REQ USER_TYPE*1000 + 5
#define ORDER_LIST_RLY USER_TYPE*1000 + 6

#define ORDER_DETAIL_REQ USER_TYPE*1000 + 7
#define ORDER_DETAIL_RLY USER_TYPE*1000 + 8

#define BANKCARD_LIST_REQ USER_TYPE*1000 + 9
#define BANKCARD_LIST_RLY USER_TYPE*1000 + 10

#define BIND_BANKCARD_REQ USER_TYPE*1000 + 11
#define BIND_BANKCARD_RLY USER_TYPE*1000 + 12

#define UNBIND_BANKCARD_REQ USER_TYPE*1000 + 13
#define UNBIND_BANKCARD_RLY USER_TYPE*1000 + 14

#define CHANGE_DEFAULT_BANKCARD_REQ USER_TYPE*1000 + 15
#define CHANGE_DEFAULT_BANKCARD_RLY USER_TYPE*1000 + 16
	
#define BANK_ACCOUNT_INFO_REQ USER_TYPE*1000 + 17
#define BANK_ACCOUNT_INFO_RLY USER_TYPE*1000 + 18
	
#define CREDIT_LIST_REQ USER_TYPE*1000 + 19
#define CREDIT_LIST_RLY USER_TYPE*1000 + 20
	
#define CREDIT_DETAIL_REQ USER_TYPE*1000 + 21
#define CREDIT_DETAIL_RLY USER_TYPE*1000 + 22

#define USER_WITHDRAW_REQ USER_TYPE*1000 + 23
#define USER_WITHDRAW_RLY USER_TYPE*1000 + 24
	
#define USER_WITHDRAW_LIST_REQ USER_TYPE*1000 + 25
#define USER_WITHDRAW_LIST_RLY USER_TYPE*1000 + 26
	
//#define USER_WITHDRAW_DETAIL_REQ USER_TYPE*1000 + 27
//#define USER_WITHDRAW_DETAIL_RLY USER_TYPE*1000 + 28
	
#define OBTAIN_VERIFY_CODE_REQ USER_TYPE*1000 + 29
#define OBTAIN_VERIFY_CODE_RLY USER_TYPE*1000 + 30
	
#define CHANGE_USER_INFO_REQ USER_TYPE*1000 + 31
#define CHANGE_USER_INFO_RLY USER_TYPE*1000 + 32
	
#define WX_PLACE_ORDER_REQ  USER_TYPE*1000 + 33 //微信下单
#define WX_PLACE_ORDER_RLY  USER_TYPE*1000 + 34 //微信下单

#define WXPAY_CLIENT_REQ USER_TYPE*1000 + 35 //微信客服端支付成功
#define WXPAY_CLIENT_RLY USER_TYPE*1000 + 36 //微信客服端支付成功

#define WXPAY_SERVER_REQ USER_TYPE*1000 + 37 //微信服务端支付成功
#define WXPAY_SERVER_RLY USER_TYPE*1000 + 38 //微信服务端支付成功
	
#define RANK

#define ALIPAY_SEVER_REQ USER_TYPE*1000 + 23
#define ALIPAY_SEVER_RLY USER_TYPE*1000 + 24

#define ALIPAY_CLIENT_REQ USER_TYPE*1000 + 25
#define ALIPAY_CLIENT_RLY USER_TYPE*1000 + 26

#define CHECK_SMS_CODE_REQ USER_TYPE*1000 + 101 //验证短信验证码
#define CHECK_SMS_CODE_RLY USER_TYPE*1000 + 102 //验证短信验证码
}  // namespace user



#endif  // PLUGINS_USER_USER_OPCODE_H_
