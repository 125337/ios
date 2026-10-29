@interface HistoryPageMoreForwardRequest : NSObject
{
    NSString * _title; // +0x8
    NSString * _desc; // +0x10
    NSString * _historyFilePath; // +0x18
    NSString * _originalMsgContent; // +0x20
    NSString * _originalHistoryXML; // +0x28
}
+ (id)makeWithTitle:(id)arg1 desc:(id)arg2 historyFilePath:(id)arg3 originalMsgContent:(id)arg4 originalHistoryXML:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)historyFilePath;
- (void)setHistoryFilePath:(id)arg1;
- (id)originalMsgContent;
- (void)setOriginalMsgContent:(id)arg1;
- (id)originalHistoryXML;
- (void)setOriginalHistoryXML:(id)arg1;
- (void).cxx_destruct;
@end
