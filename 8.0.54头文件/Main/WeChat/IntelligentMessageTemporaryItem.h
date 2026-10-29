@interface IntelligentMessageTemporaryItem : MMObject
{
    BOOL _isHadOCRData; // +0x8
    BOOL _isHadClassificationData; // +0x9
    BOOL _isHadFaceAlbumData; // +0xa
    IntelligentOCRData * _ocrData; // +0x10
    IntelligentClassificationData * _classificationData; // +0x18
    NSArray * _arrFaceAlbumData; // +0x20
}
- (BOOL)isHadOCRData;
- (void)setIsHadOCRData:(BOOL)arg1;
- (id)ocrData;
- (void)setOcrData:(id)arg1;
- (BOOL)isHadClassificationData;
- (void)setIsHadClassificationData:(BOOL)arg1;
- (id)classificationData;
- (void)setClassificationData:(id)arg1;
- (BOOL)isHadFaceAlbumData;
- (void)setIsHadFaceAlbumData:(BOOL)arg1;
- (id)arrFaceAlbumData;
- (void)setArrFaceAlbumData:(id)arg1;
- (void).cxx_destruct;
@end

