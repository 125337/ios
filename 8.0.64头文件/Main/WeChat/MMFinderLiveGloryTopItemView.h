@interface MMFinderLiveGloryTopItemView : MMUIView <WCFinderHeadImageViewDelegate>
{
    BOOL _alwaysDark; // +0x8
    id <MMFinderLiveGloryTopItemViewDelegate> _delegate; // +0x10
    FinderLiveContact * _contact; // +0x18
    unsigned long long _style; // +0x20
    WCFinderHeadImageView * _headImageView; // +0x28
    MMUIImageView * _headImageBoarderView; // +0x30
    MMUILabel * _nameLabel; // +0x38
    MMUILabel * _heatCountLabel; // +0x40
    MMUIImageView * _roleIconImageView; // +0x48
    MMFinderLiveLiveRoleSignView * _mysteriousSignView; // +0x50
}
- (id)initWithStyle:(unsigned long long)arg1 alwaysDark:(BOOL)arg2 delegate:(id)arg3;
- (void)setupSubviews;
- (void)updateHeightAndLayout;
- (void)updateWith:(id)arg1;
- (void)checkNeedShowTips;
- (void)showTipsViewIfNeed;
- (void)updateViewContents;
- (void)finderHeadImageViewLoadUrlImageFailed:(id)arg1 timeConsume:(long long)arg2 errorCode:(long long)arg3;
- (void)updateHeadForHideAvator;
- (id)headImageBoarderView;
- (id)headImageView;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)_internalClickHead;
- (void)handleNameLabelTapGesture;
- (id)nameLabel;
- (id)heatCountLabel;
- (id)roleIconImageView;
- (id)mysteriousSignView;
- (id)emptyAvatorHeadImage;
- (id)hideAvatorHeadImage;
- (double)wechatImageCorner;
- (CGSize)headSize:(BOOL)arg1;
- (id)boarderImage:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setHeadImageBoarderView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setHeatCountLabel:(id)arg1;
- (void)setRoleIconImageView:(id)arg1;
- (void)setMysteriousSignView:(id)arg1;
- (BOOL)alwaysDark;
- (void)setAlwaysDark:(BOOL)arg1;
- (void).cxx_destruct;
@end
