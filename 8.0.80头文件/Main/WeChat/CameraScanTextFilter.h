@interface CameraScanTextFilter : NSObject
{
    shared_ptr<wevision2::TextRecognizer> _text_recognizer; // +0x8
    shared_ptr<wevision2::LanguageDetector> _lang_detector; // +0x18
    BOOL _initOCRSuccess; // +0x28
    int _translateProportionForFull; // +0x2c
    int _translateProportionForCrop; // +0x30
    int _lanProportion; // +0x34
    float _weakTranslateProportion; // +0x38
    float _strongTranslateProportion; // +0x3c
    NSObject<OS_dispatch_queue> * _ocrQueue; // +0x40
}
- (id)init;
- (BOOL)initModelInternal;
- (BOOL)isModelExsit;
- (void)itemMatchTextRuleAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)itemMatchVideoTextRuleAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)imageMatchTextRuleAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)imageMatchTextRuleAsync:(id)arg1 mode:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)imageMatchTextRuleAsync:(id)arg1 mode:(unsigned int)arg2 completion:(id /* block */)arg3 textCompletion:(id /* block */)arg4;
- (double)getOcrTextLangRatioWithImageInternal:(id)arg1;
- (long long)getCurLangGroup;
- (long long)getLangGroupForOCRLanguage:(int)arg1;
- (int)getCurLangIndex;
- (double)getOcrTextRatioWithImageInternal:(id)arg1;
- (void)populateVideoTextDensityEvidenceForImage:(id)arg1 result:(id)arg2;
- (double)getOcrTextRatioWithImage:(id)arg1 ocrBoxes:(const void *)arg2;
- (int)translateProportionForFull;
- (void)setTranslateProportionForFull:(int)arg1;
- (int)translateProportionForCrop;
- (void)setTranslateProportionForCrop:(int)arg1;
- (int)lanProportion;
- (void)setLanProportion:(int)arg1;
- (BOOL)initOCRSuccess;
- (void)setInitOCRSuccess:(BOOL)arg1;
- (id)ocrQueue;
- (void)setOcrQueue:(id)arg1;
- (float)weakTranslateProportion;
- (void)setWeakTranslateProportion:(float)arg1;
- (float)strongTranslateProportion;
- (void)setStrongTranslateProportion:(float)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
