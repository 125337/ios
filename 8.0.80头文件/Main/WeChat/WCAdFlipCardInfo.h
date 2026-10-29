@interface WCAdFlipCardInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    WCMediaItem * _frontTopMedia; // +0x8
    WCMediaItem * _frontMiddleMedia; // +0x10
    WCMediaItem * _frontBottomMedia; // +0x18
    WCMediaItem * _backTopMedia; // +0x20
    WCMediaItem * _backMiddleMedia; // +0x28
    WCMediaItem * _backBottomMedia; // +0x30
    NSArray * _frontMiddleMediaCardHoles; // +0x38
    NSArray * _backMiddleMediaCardHoles; // +0x40
    double _mediaOffsetFactor; // +0x48
    WCAdCardBtnInfo * _mediaClickActionInfo; // +0x50
    NSString * _backTitleWording; // +0x58
    NSString * _backSubTitleWording; // +0x60
    NSString * _backLearnMoreWording; // +0x68
    double _backTVCAnimationDelayInterval; // +0x70
    WCAdCardBtnInfo * _learnMoreClickActionInfo; // +0x78
    double _learnMoreDelayShowInterval; // +0x80
    NSString * _flipIntroduceTitle; // +0x88
    NSString * _flipIntroduceIcon; // +0x90
    double _flipIntroduceSwitchInterval; // +0x98
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
+ (id)fetchMediaFromXmlNode:(XmlReaderNode_t *)arg1 childName:(const char *)arg2;
+ (id)fetchCardHolesFromXmlNode:(XmlReaderNode_t *)arg1 childName:(const char *)arg2;
+ (id)fetchCardHoleRectFromString:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)mediaOffsetFactor;
- (double)backTVCAnimationDelayInterval;
- (double)learnMoreDelayShowInterval;
- (double)flipIntroduceSwitchInterval;
- (BOOL)isValid;
- (id)frontTopMedia;
- (void)setFrontTopMedia:(id)arg1;
- (id)frontMiddleMedia;
- (void)setFrontMiddleMedia:(id)arg1;
- (id)frontBottomMedia;
- (void)setFrontBottomMedia:(id)arg1;
- (id)backTopMedia;
- (void)setBackTopMedia:(id)arg1;
- (id)backMiddleMedia;
- (void)setBackMiddleMedia:(id)arg1;
- (id)backBottomMedia;
- (void)setBackBottomMedia:(id)arg1;
- (id)frontMiddleMediaCardHoles;
- (void)setFrontMiddleMediaCardHoles:(id)arg1;
- (id)backMiddleMediaCardHoles;
- (void)setBackMiddleMediaCardHoles:(id)arg1;
- (void)setMediaOffsetFactor:(double)arg1;
- (id)mediaClickActionInfo;
- (void)setMediaClickActionInfo:(id)arg1;
- (id)backTitleWording;
- (void)setBackTitleWording:(id)arg1;
- (id)backSubTitleWording;
- (void)setBackSubTitleWording:(id)arg1;
- (id)backLearnMoreWording;
- (void)setBackLearnMoreWording:(id)arg1;
- (void)setBackTVCAnimationDelayInterval:(double)arg1;
- (id)learnMoreClickActionInfo;
- (void)setLearnMoreClickActionInfo:(id)arg1;
- (void)setLearnMoreDelayShowInterval:(double)arg1;
- (id)flipIntroduceTitle;
- (void)setFlipIntroduceTitle:(id)arg1;
- (id)flipIntroduceIcon;
- (void)setFlipIntroduceIcon:(id)arg1;
- (void)setFlipIntroduceSwitchInterval:(double)arg1;
- (void).cxx_destruct;
@end
