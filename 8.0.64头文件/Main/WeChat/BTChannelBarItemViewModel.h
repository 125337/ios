@interface BTChannelBarItemViewModel : NSObject <BTBarItemViewModelProtocol>
{
    BOOL _hasLine; // +0x8
    NSString * _username; // +0x10
    NSString * _nickName; // +0x18
    BTBaseBarItemView * _barItemView; // +0x20
    MPChannelTopBarInfo * _channelInfo; // +0x28
}
+ (id)itemViewClassName;
- (id)title;
- (id)headImgUrl;
- (id)dmHeadImgUrl;
- (BOOL)useDefaultIcon;
- (BOOL)hasGreenDot;
- (BOOL)hasNewMemberContent;
- (BOOL)hasArrow;
- (BOOL)showChannelGreenDot;
- (id)informMsgCnt;
- (BOOL)showSmallIcon;
- (id)smallIconUrl;
- (BOOL)hasNewFinderLiving;
- (BOOL)isBrandLiving;
- (BOOL)isFinder;
- (BOOL)isMember;
- (id)username;
- (id)nickName;
- (BOOL)hasLine;
- (void)setHasLine:(BOOL)arg1;
- (id)barItemView;
- (void)setBarItemView:(id)arg1;
- (id)channelInfo;
- (void)setChannelInfo:(id)arg1;
- (void).cxx_destruct;
@end
