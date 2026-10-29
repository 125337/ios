@interface CBTBoardPVViewRegistration : NSObject
{
    BOOL _isInteractiveType; // +0x8
    NSString * _itemId; // +0x10
    NSString * _viewStateId; // +0x18
    CBTAsstBoardBaseViewModel * _viewModel; // +0x20
    long long _state; // +0x28
    double _createTime; // +0x30
}
- (id)itemId;
- (void)setItemId:(id)arg1;
- (id)viewStateId;
- (void)setViewStateId:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (BOOL)isInteractiveType;
- (void)setIsInteractiveType:(BOOL)arg1;
- (double)createTime;
- (void)setCreateTime:(double)arg1;
- (void).cxx_destruct;
@end
