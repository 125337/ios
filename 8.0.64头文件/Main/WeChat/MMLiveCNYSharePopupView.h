@interface MMLiveCNYSharePopupView : MMUIView
{
    BOOL _notUpdate; // +0x8
    id <MMLiveCNYSharePopupViewDelegate> _delegate; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    FinderJumpInfo_NativeInfo * _oriInfo; // +0x20
    MMUIView * _contentView; // +0x28
    MMUIView * _shareContentCard; // +0x30
    UIImageView * _backgroundImageView; // +0x38
    MMUILabel * _shareTitleLabel; // +0x40
    MMUILabel * _shareIntroductionLabel; // +0x48
    MMUILabel * _shareIntroductionSponsorLabel; // +0x50
    UIImageView * _shareResultPreviewView; // +0x58
    MMUIButton * _shareActionBtn; // +0x60
    MMUILabel * _sponsorInfoLabel; // +0x68
    MMUIButton * _exitButton; // +0x70
}
+ (id)showIn:(id)arg1 delegate:(id)arg2 taskId:(id)arg3 info:(id)arg4;
- (id)initWithTaskId:(id)arg1 info:(id)arg2;
- (void)setupViews;
- (void)showIn:(id)arg1;
- (void)_internalShowIn:(id)arg1;
- (void)close;
- (void)internalClose;
- (void)_internalClose;
- (void)closeBtnAction;
- (void)onClickShareActionBtn;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutShareContent;
- (void)setupSponsorInfoLabel;
- (id)contentView;
- (id)shareContentCard;
- (id)backgroundImageView;
- (id)shareTitleLabel;
- (id)shareIntroductionLabel;
- (void)setupShareIntroductionSponsorLabel;
- (id)shareResultPreviewView;
- (id)shareActionBtn;
- (id)exitButton;
- (id)sponsorFont;
- (void)configSponsorLabel;
- (id)createTitleAttributedStr;
- (id)createIntroductionDisplayStr;
- (id)createIntroductionSponsorDisplayStr;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)oriInfo;
- (void)setOriInfo:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setShareContentCard:(id)arg1;
- (void)setBackgroundImageView:(id)arg1;
- (void)setShareTitleLabel:(id)arg1;
- (void)setShareIntroductionLabel:(id)arg1;
- (id)shareIntroductionSponsorLabel;
- (void)setShareIntroductionSponsorLabel:(id)arg1;
- (void)setShareResultPreviewView:(id)arg1;
- (void)setShareActionBtn:(id)arg1;
- (id)sponsorInfoLabel;
- (void)setSponsorInfoLabel:(id)arg1;
- (void)setExitButton:(id)arg1;
- (BOOL)notUpdate;
- (void)setNotUpdate:(BOOL)arg1;
- (void).cxx_destruct;
@end
