@interface MSETransmitImageData : MSETransmitData <PBCoding>
{
    NSMutableArray * _selectedImageUrls; // +0x18
}
+ (void)PBArrayAdd_selectedImageUrls;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)selectedImageUrls;
- (void)setSelectedImageUrls:(id)arg1;
- (void).cxx_destruct;
@end
