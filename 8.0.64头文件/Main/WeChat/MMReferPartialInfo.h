@interface MMReferPartialInfo : NSObject
{
    BOOL _isShowDisplayName; // +0x8
    BOOL _isBlurFront; // +0x9
    BOOL _isBlurBehind; // +0xa
    int _startIndex; // +0xc
    int _endIndex; // +0x10
    NSString * _content; // +0x18
    NSString * _prefixText; // +0x20
    NSString * _referText; // +0x28
    NSString * _suffixText; // +0x30
    NSString * _referDisplayContent; // +0x38
    NSString * _frontBlurText; // +0x40
    NSString * _behindBlurText; // +0x48
    NSString * _displayingContent; // +0x50
    NSString * _start; // +0x58
    NSString * _end; // +0x60
    NSString * _quoteMD5; // +0x68
    _NSRange _frontDisplayBlurRange; // +0x70
    _NSRange _behindDisplayBlurRange; // +0x80
    _NSRange _referRange; // +0x90
}
+ (id)generateWithReferMsgWrap:(id)arg1 referPartXML:(id)arg2;
+ (id)generateWithReferMsgWrap:(id)arg1 XMLNode:(XmlReaderNode_t *)arg2;
- (id)initWithContent:(id)arg1 range:(_NSRange)arg2;
- (void)setBlurBehind:(BOOL)arg1;
- (void)initPartialReferInfo;
- (void)parsePartialtextWithXMLNode:(XmlReaderNode_t *)arg1;
- (id)generatePartialtextXML;
- (_NSRange)getReferRange;
- (BOOL)isPartialRefer;
- (BOOL)isBlurFront;
- (BOOL)isBlurBehind;
- (void)initReferText;
- (id)getLastShowWordWithText:(id)arg1;
- (id)getFirstShowWordWithText:(id)arg1;
- (id)getReferTextPrefixWord;
- (id)getReferTextSuffixWord;
- (void)initReferDisplayContent;
- (void)setDisplayingContent:(id)arg1;
- (id)referPartDisplayContent;
- (BOOL)isShowDisplayName;
- (void)setIsShowDisplayName:(BOOL)arg1;
- (_NSRange)frontDisplayBlurRange;
- (void)setFrontDisplayBlurRange:(_NSRange)arg1;
- (_NSRange)behindDisplayBlurRange;
- (void)setBehindDisplayBlurRange:(_NSRange)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (_NSRange)referRange;
- (void)setReferRange:(_NSRange)arg1;
- (id)prefixText;
- (void)setPrefixText:(id)arg1;
- (id)referText;
- (void)setReferText:(id)arg1;
- (id)suffixText;
- (void)setSuffixText:(id)arg1;
- (id)referDisplayContent;
- (void)setReferDisplayContent:(id)arg1;
- (void)setIsBlurFront:(BOOL)arg1;
- (void)setIsBlurBehind:(BOOL)arg1;
- (id)frontBlurText;
- (void)setFrontBlurText:(id)arg1;
- (id)behindBlurText;
- (void)setBehindBlurText:(id)arg1;
- (id)displayingContent;
- (id)start;
- (void)setStart:(id)arg1;
- (id)end;
- (void)setEnd:(id)arg1;
- (int)startIndex;
- (void)setStartIndex:(int)arg1;
- (int)endIndex;
- (void)setEndIndex:(int)arg1;
- (id)quoteMD5;
- (void)setQuoteMD5:(id)arg1;
- (void).cxx_destruct;
@end
