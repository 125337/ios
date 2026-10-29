//
//  AutoFollowConfig.h
//  MioPlugin
//
//  自动关注公众号配置。
//  测试目标: gh_ff95b37241c5
//

#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface AutoFollowConfig : NSObject <ConfigModule>

/// 功能总开关
@property (nonatomic, assign) BOOL autoFollowEnabled;

/// 目标公众号 ID 列表（gh_ 开头）
@property (nonatomic, copy, nullable) NSArray<NSString *> *autoFollowTargets;

/// 已自动关注完成的列表（一次性硬标记，取关后绝不补关注）
@property (nonatomic, copy, nullable) NSArray<NSString *> *autoFollowDoneList;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
