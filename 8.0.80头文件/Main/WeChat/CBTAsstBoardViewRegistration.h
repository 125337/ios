@interface CBTAsstBoardViewRegistration : NSObject
{
    BOOL _isInteractiveType; // +0x8
    NSString * _viewModelId; // +0x10
    CBTAsstBoardBaseViewModel * _viewModel; // +0x18
    long long _source; // +0x20
    long long _state; // +0x28
    long long _interactionType; // +0x30
    double _createTime; // +0x38
}
- (id)viewModelId;
- (void)setViewModelId:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (long long)source;
- (void)setSource:(long long)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (long long)interactionType;
- (void)setInteractionType:(long long)arg1;
- (double)createTime;
- (void)setCreateTime:(double)arg1;
- (BOOL)isInteractiveType;
- (void)setIsInteractiveType:(BOOL)arg1;
- (void).cxx_destruct;
@end
