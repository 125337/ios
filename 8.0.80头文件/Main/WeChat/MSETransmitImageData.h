@interface MSETransmitImageData : MSETransmitData <PBCoding>
{
    NSMutableArray * _selectedImageUrls; // +0x18
    NSMutableArray * _livePhotoPairedVideoPaths; // +0x20
}
+ (void)PBArrayAdd_selectedImageUrls;
+ (void)PBArrayAdd_livePhotoPairedVideoPaths;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)selectedImageUrls;
- (void)setSelectedImageUrls:(id)arg1;
- (id)livePhotoPairedVideoPaths;
- (void)setLivePhotoPairedVideoPaths:(id)arg1;
- (void).cxx_destruct;
@end
