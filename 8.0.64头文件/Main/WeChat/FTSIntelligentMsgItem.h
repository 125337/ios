@interface FTSIntelligentMsgItem : FTSMsgItem
{
    NSString * _ocrText; // +0x30
    NSString * _faceAlbumLabels; // +0x38
    NSString * _classificationLabels; // +0x40
}
- (long long)compareMsgItemAscending:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)ocrText;
- (void)setOcrText:(id)arg1;
- (id)faceAlbumLabels;
- (void)setFaceAlbumLabels:(id)arg1;
- (id)classificationLabels;
- (void)setClassificationLabels:(id)arg1;
- (void).cxx_destruct;
@end
