@interface MMWording : NSObject
{
    BOOL _needshow; // +0x8
    NSString * _entryTip; // +0x10
    NSString * _title; // +0x18
    NSString * _subTitle; // +0x20
    NSString * _desc; // +0x28
    NSString * _subDesc; // +0x30
}
+ (id)WordingWithNeedshow:(BOOL)arg1 entryTip:(id)arg2 title:(id)arg3 subTitle:(id)arg4 desc:(id)arg5 subDesc:(id)arg6;
- (id)initWithNeedshow:(BOOL)arg1 entryTip:(id)arg2 title:(id)arg3 subTitle:(id)arg4 desc:(id)arg5 subDesc:(id)arg6;
- (id)description;
- (BOOL)needshow;
- (id)entryTip;
- (id)title;
- (id)subTitle;
- (id)desc;
- (id)subDesc;
- (void).cxx_destruct;
@end

