@interface BrandNotificationBaseCellViewModel : NSObject
{
    BOOL _hasBottomLine; // +0x8
    CMessageWrap * _messageWrap; // +0x10
    double _viewWidth; // +0x18
}
+ (BOOL)canCreateViewModelWithMsgWrap:(id)arg1;
+ (id)createModelWithMsgWrap:(id)arg1 viewWidth:(double)arg2;
- (id)cellViewClassName;
- (id)initWithMessage:(id)arg1 viewWidth:(double)arg2;
- (double)viewHeight;
- (double)contentLeftMargin;
- (double)detailContentLeftMargin;
- (double)contentTopMargin;
- (double)messageLabelTopMargin;
- (double)timeLabelTopMargin;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (BOOL)hasBottomLine;
- (void)setHasBottomLine:(BOOL)arg1;
- (double)viewWidth;
- (void)setViewWidth:(double)arg1;
- (void).cxx_destruct;
@end

