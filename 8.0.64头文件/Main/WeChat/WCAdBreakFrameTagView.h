@interface WCAdBreakFrameTagView : MMUIView <IWCAdBreakFramePlayInteractionExt>
{
    BOOL _isDetail; // +0x8
    WCAdBreakFrameInfo * _adBreakFrameInfo; // +0x10
    WCDataItem * _dataItem; // +0x18
    WCAdBreakFrameTagLogic * _tagLogic; // +0x20
    WCAdURLImageView * _iconView; // +0x28
    WCAdTypewriterLabel * _titleView; // +0x30
    MMUIButton * _bgButton; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 adBreakFrameInfo:(id)arg2 dataItem:(id)arg3 isDetail:(BOOL)arg4;
- (void)initView;
- (void)layoutSubviews;
- (id)iconView;
- (id)titleView;
- (id)tagLogic;
- (id)bgButton;
- (void)onClickBgButton;
- (void)onBreakFrameInteractionStateChanged:(id)arg1 interactionState:(int)arg2;
- (id)adBreakFrameInfo;
- (void)setAdBreakFrameInfo:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)isDetail;
- (void)setIsDetail:(BOOL)arg1;
- (void)setTagLogic:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setBgButton:(id)arg1;
- (void).cxx_destruct;
@end
