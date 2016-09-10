//
//  FriendsModel.h
//  StevenBaseModel
//
//  Created by qugo on 15/9/9.
//  Copyright (c) 2015年 qugo. All rights reserved.
//

#import "GenericModel.h"
#import "StudentModel.h"

@interface FriendsModel : GenericModel
@property (nonatomic, strong) NSMutableDictionary<StudentModel> *friendDic;

@end
