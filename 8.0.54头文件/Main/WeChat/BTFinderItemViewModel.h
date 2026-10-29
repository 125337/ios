@interface BTFinderItemViewModel : MMObject
{
    BOOL _isTitleUp; // +0x8
    unsigned int _showRedPacketFlag; // +0xc
    unsigned long long _type; // +0x10
    NSString * _headImageUrl; // +0x18
    NSString * _titleText; // +0x20
    NSString * _userName; // +0x28
    NSString * _nickName; // +0x30
    NSString * _createTimeText; // +0x38
    NSString * _coverImageUrl; // +0x40
    NSString * _recommendReason; // +0x48
    NSString * _timeText; // +0x50
    double _viewWidth; // +0x58
    UIColor * _coverBottomMainColor; // +0x60
    BTRecommendFinderData * _recommendFinderData; // +0x68
    NSString * _fromSessiongId; // +0x70
    double _cacheViewHeight; // +0x78
    double _cacheReaderStyleCoverContainerViewHeight; // +0x80
}
+ (id)cellIdentifier;
- (id)initWithBTRecommendFinderData:(id)arg1;
- (BOOL)isViewHidden;
- (double)viewHeight;
- (BOOL)canShowTagView;
- (BOOL)isMembershipItem;
- (double)headerContainerViewHeight;
- (double)headImageViewHeight;
- (double)headImageViewTopMargin;
- (double)coverContainerViewHeight;
- (double)coverImageViewHeight;
- (double)titleLabelLeftMargin;
- (double)titleLabelTopMargin;
- (double)titleLabelBottomMargin;
- (double)readerStyleCoverContainerViewHeight;
- (double)digestLabelHeight;
- (double)titleMaxWidth;
- (id)titleLabelFont;
- (double)titleLabelLineNumber;
- (id)titleLabelColor;
- (double)titleLabelLineSpacing;
- (id)digestLabelColor;
- (double)digestTopMargin;
- (double)timeLabelBottomMargin;
- (BOOL)shouldShowCoverBackgroundEffect;
- (id)logStr:(BOOL)arg1;
- (id)cellIdentifier;
- (id)finderExportId;
- (id)finderNegativeFeedbackInfo;
- (id)finderFeedbackWordings;
- (BOOL)isTitleUpNewStyle;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)createTimeText;
- (void)setCreateTimeText:(id)arg1;
- (id)coverImageUrl;
- (void)setCoverImageUrl:(id)arg1;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg1;
- (id)timeText;
- (void)setTimeText:(id)arg1;
- (double)viewWidth;
- (void)setViewWidth:(double)arg1;
- (id)coverBottomMainColor;
- (void)setCoverBottomMainColor:(id)arg1;
- (id)recommendFinderData;
- (void)setRecommendFinderData:(id)arg1;
- (id)fromSessiongId;
- (void)setFromSessiongId:(id)arg1;
- (unsigned int)showRedPacketFlag;
- (void)setShowRedPacketFlag:(unsigned int)arg1;
- (BOOL)isTitleUp;
- (void)setIsTitleUp:(BOOL)arg1;
- (double)cacheViewHeight;
- (void)setCacheViewHeight:(double)arg1;
- (double)cacheReaderStyleCoverContainerViewHeight;
- (void)setCacheReaderStyleCoverContainerViewHeight:(double)arg1;
- (void).cxx_destruct;
@end

