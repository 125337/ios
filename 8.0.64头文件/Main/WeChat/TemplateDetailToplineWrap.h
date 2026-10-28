@interface TemplateDetailToplineWrap : NSObject
{
    BOOL _hideDashLine; // +0x8
    unsigned int _smallTextCount; // +0xc
    LineStyleWrap * _keyWrap; // +0x10
    LineStyleWrap * _valueWrap; // +0x18
    LineStyleWrap * _extraWrap; // +0x20
}
- (id)keyWrap;
- (void)setKeyWrap:(id)arg1;
- (id)valueWrap;
- (void)setValueWrap:(id)arg1;
- (id)extraWrap;
- (void)setExtraWrap:(id)arg1;
- (BOOL)hideDashLine;
- (void)setHideDashLine:(BOOL)arg1;
- (unsigned int)smallTextCount;
- (void)setSmallTextCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
