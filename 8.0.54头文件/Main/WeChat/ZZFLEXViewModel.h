@interface ZZFLEXViewModel : NSObject
{
    id _dataModel; // +0x8
    Class _viewClass; // +0x10
    id <ZZFLEXViewModelDelegate> _vmDelegate; // +0x18
    NSString * _reuseIdentifier; // +0x20
    long long _viewTag; // +0x28
    id /* block */ _eventAction; // +0x30
    id _delegate; // +0x38
    id /* block */ _selectedAction; // +0x40
    id /* block */ _configAction; // +0x48
    CGSize _viewSize; // +0x50
}
- (CGSize)visableSizeForHostView:(id)arg1 angel:(id)arg2 sectionInsets:(UIEdgeInsets)arg3;
- (void)excuteConfigActionForHostView:(id)arg1 itemView:(id)arg2 sectionCount:(long long)arg3 indexPath:(id)arg4;
- (void)excuteSelectedActionForHostView:(id)arg1;
- (id)initWithViewClass:(Class)arg1 vmDelegate:(id)arg2;
- (id)initWithViewClass:(Class)arg1 vmDelegate:(id)arg2 dataModel:(id)arg3;
- (id)initWithViewClass:(Class)arg1 reuseIdentifier:(id)arg2 vmDelegate:(id)arg3 dataModel:(id)arg4 viewTag:(long long)arg5;
- (id)initWithViewClass:(Class)arg1 reuseIdentifier:(id)arg2 vmDelegate:(id)arg3 dataModel:(id)arg4 viewSize:(CGSize)arg5 viewTag:(long long)arg6;
- (void)setDataModel:(id)arg1;
- (void)setViewClass:(Class)arg1;
- (void)setViewSize:(CGSize)arg1;
- (void)updateViewSize;
- (id)reuseIdentifier;
- (CGSize)viewSize;
- (id)dataModel;
- (Class)viewClass;
- (id)vmDelegate;
- (void)setVmDelegate:(id)arg1;
- (void)setReuseIdentifier:(id)arg1;
- (long long)viewTag;
- (void)setViewTag:(long long)arg1;
- (id /* block */)eventAction;
- (void)setEventAction:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)selectedAction;
- (void)setSelectedAction:(id /* block */)arg1;
- (id /* block */)configAction;
- (void)setConfigAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

