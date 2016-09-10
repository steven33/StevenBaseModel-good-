//
//  FriendsModel.m
//  StevenBaseModel
//
//  Created by qugo on 15/9/9.
//  Copyright (c) 2015年 qugo. All rights reserved.
//

#import "FriendsModel.h"

@implementation FriendsModel
- (instancetype)init
{
    self = [super init];
    if (self) {
        _friendDic = [[NSMutableDictionary alloc] init];
    }
    return self;
}
@end
