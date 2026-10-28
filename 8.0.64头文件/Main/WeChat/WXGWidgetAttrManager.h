@interface WXGWidgetAttrManager : NSObject
{
    NSDictionary * _textAlignmentMap; // +0x8
    NSDictionary * _lineBreakModeMap; // +0x10
    NSDictionary * _contentModeMap; // +0x18
    NSDictionary * _viewClassNameMap; // +0x20
}
+ (id)sharedInstance;
+ (id)getClassNameByTag:(id)arg1;
+ (void)wxgWidgetView:(id)arg1 setAttrWithName:(id)arg2 value:(id)arg3 hostView:(id)arg4;
+ (BOOL)wxgAttrPreprocessOrBindToView:(id)arg1 withAttrName:(id)arg2 attrValue:(id *)arg3 hostView:(id)arg4;
- (id)init;
- (id)textAlignmentMap;
- (id)lineBreakModeMap;
- (id)contentModeMap;
- (id)viewClassNameMap;
- (void).cxx_destruct;
@end
