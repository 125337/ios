@interface WCShareCardGeneralReceiveHeaderView : WCShareCardGeneralHeaderViewV2
{
    MMUIButton * _sureButton; // +0x8
    MMUILabel * _vaildDateLabel; // +0x10
    MMUILabel * _useabelTimeLabel; // +0x18
}
- (id)initWithViewWidth:(double)arg1 withCardSourceData:(id)arg2 isGiftFromUserHeaderView:(BOOL)arg3 isShareCard:(BOOL)arg4 cardStatus:(int)arg5 isNeedHideAccecptBtn:(BOOL)arg6 delegate:(id)arg7;
- (void)initViews;
- (void)setContentViewHetght;
- (void)singleSureButtonDidSelected;
- (id)sureButton;
- (void)setSureButton:(id)arg1;
- (id)vaildDateLabel;
- (void)setVaildDateLabel:(id)arg1;
- (id)useabelTimeLabel;
- (void)setUseabelTimeLabel:(id)arg1;
- (void).cxx_destruct;
@end

