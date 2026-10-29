@interface MMFinderLiveRedPacketAnchorPromoteInfo : MMFinderLiveAnchorPromoteInfo
{
    FinderLivePromoteInfoRedPacketCover * _redPacketInfo; // +0x30
}
+ (id)createRedPacketAnchorPromoteInfoFrom:(id)arg1;
- (id)promoteKey;
- (id)redPacketInfo;
- (void)setRedPacketInfo:(id)arg1;
- (void).cxx_destruct;
@end
