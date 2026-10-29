@interface WCRedEnvelopesReceiveHomeTemplateView : UIView <WCPayWebImageViewDelegate, PAGViewListener, WCPayWebPagViewDelegate>
{
    BOOL _isStoryMode; // +0x8
    BOOL _isMiniPicMode; // +0x9
    BOOL _isShowPag; // +0xa
    id <WCRedEnvelopesReceiveHomeTemplateViewDelegate> _m_delegate; // +0x10
    WCRedEnvelopesReceiveHomeTemplateItem * _templateItem; // +0x18
    UIButton * _openRedEnvelopesButton; // +0x20
    UIImageView * _topImageView; // +0x28
    UIImageView * _curveImageView; // +0x30
    UIImageView * _defualtImageView; // +0x38
    UIView * _redEnvelopesView; // +0x40
    UIView * _topRedView; // +0x48
    UIView * _topView; // +0x50
    UIView * _bottomView; // +0x58
    WCPayWebImageView * _corpImageView; // +0x60
    UIView * _coverBackgroundView; // +0x68
    MMHeadImageView * _headImageView; // +0x70
    UILabel * _nickNameLabel; // +0x78
    UILabel * _descTitleLabel; // +0x80
    UIView * _coverTagView; // +0x88
    UILabel * _tailDescLabel; // +0x90
    WCPayWebImageView * _corpImageWidgetImageView; // +0x98
    WCPayWebPagView * _pagView; // +0xa0
    WCPayWebPagView * _atmospherePagView; // +0xa8
}
- (id)initWithFrame:(CGRect)arg1 templateItem:(id)arg2 showPag:(BOOL)arg3 miniPicMode:(BOOL)arg4;
- (void)layoutSubviews;
- (void)layoutContentView;
- (void)updateWithTemplateItem:(id)arg1;
- (BOOL)hasRedSkin;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (void)onLoadWCPayWebImageFail:(id)arg1;
- (void)setOpenBtnHidden:(BOOL)arg1;
- (void)setIsStoryMode:(BOOL)arg1;
- (void)playPag;
- (void)updatePagViews;
- (void)onLoadWCPayWebPagOK:(id)arg1;
- (void)stopPag;
- (id)demoPagFile;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)templateItem;
- (void)setTemplateItem:(id)arg1;
- (BOOL)isStoryMode;
- (BOOL)isMiniPicMode;
- (void)setIsMiniPicMode:(BOOL)arg1;
- (id)openRedEnvelopesButton;
- (void)setOpenRedEnvelopesButton:(id)arg1;
- (id)topImageView;
- (void)setTopImageView:(id)arg1;
- (id)curveImageView;
- (void)setCurveImageView:(id)arg1;
- (id)defualtImageView;
- (void)setDefualtImageView:(id)arg1;
- (id)redEnvelopesView;
- (void)setRedEnvelopesView:(id)arg1;
- (id)topRedView;
- (void)setTopRedView:(id)arg1;
- (id)topView;
- (void)setTopView:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)corpImageView;
- (void)setCorpImageView:(id)arg1;
- (id)coverBackgroundView;
- (void)setCoverBackgroundView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)descTitleLabel;
- (void)setDescTitleLabel:(id)arg1;
- (id)coverTagView;
- (void)setCoverTagView:(id)arg1;
- (id)tailDescLabel;
- (void)setTailDescLabel:(id)arg1;
- (id)corpImageWidgetImageView;
- (void)setCorpImageWidgetImageView:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)atmospherePagView;
- (void)setAtmospherePagView:(id)arg1;
- (BOOL)isShowPag;
- (void)setIsShowPag:(BOOL)arg1;
- (void).cxx_destruct;
@end

