@interface WCFinderChooseFeedTabControllerConfig : NSObject
{
    BOOL _isPlanePickerStyle; // +0x8
    WCFinderFeedPickerParams * _params; // +0x10
    double _cellHeightRatio; // +0x18
}
- (id)init;
- (BOOL)isPlanePickerStyle;
- (void)setIsPlanePickerStyle:(BOOL)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (double)cellHeightRatio;
- (void)setCellHeightRatio:(double)arg1;
- (void).cxx_destruct;
@end

