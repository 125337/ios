@interface WCGroupHint : NSObject
{
    unsigned int _groupId; // +0x8
    NSString * _topFeedId; // +0x10
    NSString * _bottomFeedId; // +0x18
}
- (BOOL)isValid;
- (id)description;
- (unsigned int)groupId;
- (void)setGroupId:(unsigned int)arg1;
- (id)topFeedId;
- (void)setTopFeedId:(id)arg1;
- (id)bottomFeedId;
- (void)setBottomFeedId:(id)arg1;
- (void).cxx_destruct;
@end

