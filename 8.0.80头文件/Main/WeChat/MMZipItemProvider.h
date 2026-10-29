@interface MMZipItemProvider : MMBaseItemProvider
{
    NSString * _fileName; // +0x8
    NSString * _filePath; // +0x10
}
+ (id)writableTypeIdentifiersForItemProvider;
- (id)initWithFileName:(id)arg1 filePath:(id)arg2;
- (id)writableTypeIdentifiersForItemProvider;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)description;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void).cxx_destruct;
@end
