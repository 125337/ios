@interface IntelligentMessageResultItem : IntelligentMediaItem
{
    IntelligentClassificationData * _classificationData; // +0x28
    IntelligentOCRData * _ocrData; // +0x30
    IntelligentFaceAlbumData * _faceAlbumData; // +0x38
}
- (id)classificationData;
- (void)setClassificationData:(id)arg1;
- (id)ocrData;
- (void)setOcrData:(id)arg1;
- (id)faceAlbumData;
- (void)setFaceAlbumData:(id)arg1;
- (void).cxx_destruct;
@end

