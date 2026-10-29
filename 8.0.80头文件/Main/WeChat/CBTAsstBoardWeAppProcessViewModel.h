@interface CBTAsstBoardWeAppProcessViewModel : CBTAsstBoardBaseViewModel
{
    NSString * _sessionId; // +0x8
    id <CBTAsstBoardWeAppProcessViewModelUIDelegate> _uiDelegate; // +0x10
    double _maxHeight; // +0x18
    double _maxWidth; // +0x20
}
- (void)pushProcessData:(id)arg1;
- (void)pushPOIProcessData:(id)arg1;
- (void)stopProcess:(BOOL)arg1;
- (void)clearProcessView;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (BOOL)isForwardable;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)uiDelegate;
- (void)setUiDelegate:(id)arg1;
- (double)maxHeight;
- (void)setMaxHeight:(double)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void).cxx_destruct;
@end
