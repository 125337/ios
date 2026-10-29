@interface WCFinderLiveCompleteLiveContentView : UIView
{
    UIScrollView * _liveContainerView; // +0x8
    YYLabel * _liveDetailLabel; // +0x10
    YYLabel * _liveCaculateDetailLabel; // +0x18
    unsigned long long _contentType; // +0x20
    id <WCFinderLiveCompleteLiveContentViewDelegate> _delegate; // +0x28
    unsigned long long _detailLabelState; // +0x30
    MMWebImageView * _coverView; // +0x38
    MMUILabel * _titleLabel; // +0x40
    MMUILabel * _timeLabel; // +0x48
    MMUIButton * _actionButton; // +0x50
    double _liveDetailLabelHeight; // +0x58
    FinderLiveNoticeInfo * _liveNoticeInfo; // +0x60
    FinderObject * _finderObject; // +0x68
    UIView * _sepelateLine; // +0x70
    NSAttributedString * _originAttributedString; // +0x78
    NSAttributedString * _expandAttributedString; // +0x80
    NSAttributedString * _packAttributedString; // +0x88
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)layoutUIWhenLive;
- (void)layoutUIWhenLivePreview;
- (BOOL)isPreviewNoneIntroduction;
- (void)layoutActionButtonWhenClick:(BOOL)arg1 type:(unsigned long long)arg2;
- (void)updateViewWithType:(unsigned long long)arg1 finderObject:(id)arg2 liveNoticeInfo:(id)arg3;
- (void)updateData;
- (void)updateContentViewAction:(id)arg1;
- (void)updateDataWhenLive;
- (void)updateDataWhenLivePreview;
- (BOOL)isLabelOverWidth:(id)arg1;
- (double)getHeightWithType:(unsigned long long)arg1 finderObject:(id)arg2 liveNoticeInfo:(id)arg3 detailLabelState:(unsigned long long)arg4;
- (double)getCurrentViewHeight:(id)arg1 font:(id)arg2 detailLabelState:(unsigned long long)arg3;
- (id)getAttributedStringWithOriginString:(id)arg1 font:(id)arg2;
- (id)getPackAttributedStringWithFont:(id)arg1;
- (id)getTruncationTokenAttributedStringWithFont:(id)arg1;
- (id)getExpandAttributedStringWithFont:(id)arg1;
- (CGSize)sizeLabelToFit:(id)arg1 width:(double)arg2 height:(double)arg3;
- (void)updateCurrentContentViewHeight:(unsigned long long)arg1;
- (id)liveContainerView;
- (id)coverView;
- (id)titleLabel;
- (id)sepelateLine;
- (id)timeLabel;
- (id)liveDetailLabel;
- (id)liveCaculateDetailLabel;
- (id)actionButton;
- (void)actionButtonClick:(id)arg1;
- (unsigned long long)contentType;
- (void)setContentType:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)detailLabelState;
- (void)setDetailLabelState:(unsigned long long)arg1;
- (void)setCoverView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (double)liveDetailLabelHeight;
- (void)setLiveDetailLabelHeight:(double)arg1;
- (id)liveNoticeInfo;
- (void)setLiveNoticeInfo:(id)arg1;
- (id)finderObject;
- (void)setFinderObject:(id)arg1;
- (void)setSepelateLine:(id)arg1;
- (id)originAttributedString;
- (void)setOriginAttributedString:(id)arg1;
- (id)expandAttributedString;
- (void)setExpandAttributedString:(id)arg1;
- (id)packAttributedString;
- (void)setPackAttributedString:(id)arg1;
- (void).cxx_destruct;
@end

