@interface OCRResult : NSObject
{
    unsigned int _ocrId; // +0x8
    unsigned int _imageType; // +0xc
    NSString * _oriString; // +0x10
    NSString * _translation; // +0x18
    BOOL _newOcrmt; // +0x20
    unsigned int ocrId; // +0x24
    unsigned int imageType; // +0x28
    NSString * oriString; // +0x30
    NSString * translation; // +0x38
    NSArray * _translations; // +0x40
    double _angle; // +0x48
    NSString * _fromLanguage; // +0x50
    NSString * _toLanguage; // +0x58
    NSString * _brandWording; // +0x60
}
- (unsigned int)ocrId;
- (void)setOcrId:(unsigned int)arg1;
- (unsigned int)imageType;
- (void)setImageType:(unsigned int)arg1;
- (id)oriString;
- (void)setOriString:(id)arg1;
- (id)translation;
- (void)setTranslation:(id)arg1;
- (id)translations;
- (void)setTranslations:(id)arg1;
- (double)angle;
- (void)setAngle:(double)arg1;
- (id)fromLanguage;
- (void)setFromLanguage:(id)arg1;
- (id)toLanguage;
- (void)setToLanguage:(id)arg1;
- (id)brandWording;
- (void)setBrandWording:(id)arg1;
- (BOOL)newOcrmt;
- (void)setNewOcrmt:(BOOL)arg1;
- (void).cxx_destruct;
@end
