@interface MMImageBrowserAIPSuggestionCommand : NSObject
{
    NSString * _title; // +0x8
    long long _commandType; // +0x10
}
+ (id)commandWithTitle:(id)arg1 commandType:(long long)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (long long)commandType;
- (void)setCommandType:(long long)arg1;
- (void).cxx_destruct;
@end
