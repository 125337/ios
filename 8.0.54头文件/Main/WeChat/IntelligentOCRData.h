@interface IntelligentOCRData : IntelligentMediaItem
{
    unsigned int _ocrTime; // +0x28
    IntelligentOCRItem * _ocrItem; // +0x30
}
- (id)ocrItem;
- (void)setOcrItem:(id)arg1;
- (unsigned int)ocrTime;
- (void)setOcrTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

