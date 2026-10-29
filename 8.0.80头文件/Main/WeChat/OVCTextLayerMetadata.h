@interface OVCTextLayerMetadata : NSObject
{
    int _layerID; // +0x8
    float _fontSize; // +0xc
    float _textStrokeWidth; // +0x10
    float _textShadowBlurRadius; // +0x14
    float _characterSpacing; // +0x18
    float _characterWidthMultiple; // +0x1c
    float _backgroundCornerRadius; // +0x20
    float _backgroundStrokeWidth; // +0x24
    NSString * _textTemplate; // +0x28
    NSString * _text; // +0x30
    NSArray * _textBlockMetadatas; // +0x38
    NSString * _contentLocaleID; // +0x40
    NSString * _fontName; // +0x48
    NSString * _textFill; // +0x50
    NSString * _textStrokeFill; // +0x58
    NSString * _textShadowFill; // +0x60
    unsigned long long _textParagraphType; // +0x68
    unsigned long long _textAlignment; // +0x70
    NSString * _backgroundFill; // +0x78
    NSString * _backgroundStrokeColor; // +0x80
    CGVector _shearDegrees; // +0x88
    CGVector _textShadowOffset; // +0x98
    UIEdgeInsets _backgroundEdgeInsets; // +0xa8
}
- (id)initWithLayerID:(int)arg1 textTemplate:(id)arg2 text:(id)arg3 textBlockMetadatas:(id)arg4 contentLocaleID:(id)arg5 fontName:(id)arg6 fontSize:(float)arg7 shearDegrees:(CGVector)arg8 textFill:(id)arg9 textStrokeFill:(id)arg10 textStrokeWidth:(float)arg11 textShadowFill:(id)arg12 textShadowOffset:(CGVector)arg13 textShadowBlurRadius:(float)arg14 textParagraphType:(unsigned long long)arg15 textAlignment:(unsigned long long)arg16 characterSpacing:(float)arg17 characterWidthMultiple:(float)arg18 backgroundFill:(id)arg19 backgroundCornerRadius:(float)arg20 backgroundStrokeColor:(id)arg21 backgroundStrokeWidth:(float)arg22 backgroundEdgeInsets:(UIEdgeInsets)arg23;
- (int)layerID;
- (id)textTemplate;
- (id)text;
- (id)textBlockMetadatas;
- (id)contentLocaleID;
- (id)fontName;
- (float)fontSize;
- (CGVector)shearDegrees;
- (id)textFill;
- (id)textStrokeFill;
- (float)textStrokeWidth;
- (id)textShadowFill;
- (CGVector)textShadowOffset;
- (float)textShadowBlurRadius;
- (unsigned long long)textParagraphType;
- (unsigned long long)textAlignment;
- (float)characterSpacing;
- (float)characterWidthMultiple;
- (id)backgroundFill;
- (float)backgroundCornerRadius;
- (id)backgroundStrokeColor;
- (float)backgroundStrokeWidth;
- (UIEdgeInsets)backgroundEdgeInsets;
- (void).cxx_destruct;
@end
