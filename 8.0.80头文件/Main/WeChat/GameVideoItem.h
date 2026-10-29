@interface GameVideoItem : NSObject
{
    BOOL _inActionSheet; // +0x8
    unsigned int _scene; // +0xc
    int _educationType; // +0x10
    unsigned int _educationReportExtType; // +0x14
    unsigned int _educationReportExtPosition; // +0x18
    NSString * _text; // +0x20
    NSString * _desc; // +0x28
    id /* block */ _tapCallback; // +0x30
    NSString * _educationTitleOnce; // +0x38
    NSString * _educationDescOnce; // +0x40
    NSString * _educationTitleEveryTime; // +0x48
    NSString * _educationDescEveryTime; // +0x50
}
- (id)initWithScene:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (int)educationType;
- (void)setEducationType:(int)arg1;
- (BOOL)inActionSheet;
- (void)setInActionSheet:(BOOL)arg1;
- (id /* block */)tapCallback;
- (void)setTapCallback:(id /* block */)arg1;
- (id)educationTitleOnce;
- (void)setEducationTitleOnce:(id)arg1;
- (id)educationDescOnce;
- (void)setEducationDescOnce:(id)arg1;
- (id)educationTitleEveryTime;
- (void)setEducationTitleEveryTime:(id)arg1;
- (id)educationDescEveryTime;
- (void)setEducationDescEveryTime:(id)arg1;
- (unsigned int)educationReportExtType;
- (void)setEducationReportExtType:(unsigned int)arg1;
- (unsigned int)educationReportExtPosition;
- (void)setEducationReportExtPosition:(unsigned int)arg1;
- (void).cxx_destruct;
@end
