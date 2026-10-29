@interface WeVisDebugViewController : UIViewController
{
    BOOL _enableGPUSegment; // +0x8
    UILabel * _voipSegmentGPU; // +0x10
    UITextField * _modelPathSearch; // +0x18
    UIButton * _searchModelPathBtn; // +0x20
    UILabel * _modelPath; // +0x28
}
- (BOOL)enableGPUSegment;
- (void)setEnableGPUSegment:(BOOL)arg1;
- (id)voipSegmentGPU;
- (void)setVoipSegmentGPU:(id)arg1;
- (id)modelPathSearch;
- (void)setModelPathSearch:(id)arg1;
- (id)searchModelPathBtn;
- (void)setSearchModelPathBtn:(id)arg1;
- (id)modelPath;
- (void)setModelPath:(id)arg1;
- (void).cxx_destruct;
@end

