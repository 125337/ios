@interface OpenWebPageInfo : NSObject
{
    NSNumber * _scene; // +0x8
    NSNumber * _hideOptionMenu; // +0x10
}
+ (id)makeWithScene:(id)arg1 hideOptionMenu:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)hideOptionMenu;
- (void)setHideOptionMenu:(id)arg1;
- (void).cxx_destruct;
@end

