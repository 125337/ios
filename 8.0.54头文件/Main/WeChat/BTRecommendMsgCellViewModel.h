@interface BTRecommendMsgCellViewModel : BTBaseRecommendAppMsgCellViewModel
{
    NSMutableArray * _signatureLabelStyles; // +0x28
    NSMutableArray * _appMsgTitleLabelStyles; // +0x30
    CGSize _signatureLabelSize; // +0x38
    CGSize _appMsgTitleLabelSize; // +0x48
}
+ (BOOL)canCreateViewModelWithSectionData:(id)arg1 accountIndex:(unsigned int)arg2 appMsgIndex:(unsigned int)arg3;
- (void)updateWithMsgWrap:(id)arg1 contact:(id)arg2 viewWidth:(double)arg3;
- (double)viewHeight;
- (id)itemViewClassName;
- (id)msgTitle;
- (id)msgTitleFont;
- (double)headIconSize;
- (id)appMsgRecommendReason;
- (id)appMsgTitle;
- (id)appMsgDigest;
- (BOOL)appMsgDeleted;
- (id)bizNickName;
- (id)bizUserName;
- (id)headerUrl;
- (id)signature;
- (id)recommendReason;
- (BOOL)isExposed;
- (id)accountData;
- (CGSize)signatureLabelSize;
- (id)signatureLabelStyles;
- (CGSize)appMsgTitleLabelSize;
- (id)appMsgTitleLabelStyles;
- (id)feedbackInfo;
- (void)clearCache;
- (void).cxx_destruct;
@end

