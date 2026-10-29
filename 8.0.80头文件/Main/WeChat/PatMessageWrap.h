@interface PatMessageWrap : NSObject <NSCopying>
{
    NSString * _chatUserName; // +0x8
    unsigned long long _patCount; // +0x10
    NSMutableArray * _patWraps; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (BOOL)exceedsFoldCount;
- (id)digest;
- (id)highlightDigest;
- (BOOL)shouldHighlightDigest;
- (id)patWrapWithCreateTime:(unsigned long long)arg1 fromUserName:(id)arg2 pattedUserName:(id)arg3;
- (id)patWrapWithServerId:(long long)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)chatUserName;
- (void)setChatUserName:(id)arg1;
- (unsigned long long)patCount;
- (void)setPatCount:(unsigned long long)arg1;
- (id)patWraps;
- (void)setPatWraps:(id)arg1;
- (void).cxx_destruct;
@end
