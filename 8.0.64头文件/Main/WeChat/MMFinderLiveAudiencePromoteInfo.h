@interface MMFinderLiveAudiencePromoteInfo : NSObject
{
    unsigned int _type; // +0x8
    unsigned long long _promoteId; // +0x10
    NSData * _reportExtBuffer; // +0x18
    FinderLiveShopWindowAdItem * _adItem; // +0x20
    FinderJumpInfo * _jumpInfo; // +0x28
}
+ (id)createLiveAudiencePromoteInfoFrom:(id)arg1;
- (unsigned long long)promoteId;
- (void)setPromoteId:(unsigned long long)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)reportExtBuffer;
- (void)setReportExtBuffer:(id)arg1;
- (id)adItem;
- (void)setAdItem:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
