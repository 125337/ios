@interface MMFileRepresentationPasteboardWriter : NSObject
+ (BOOL)setObjects:(id)arg1 toPasteboard:(id)arg2;
+ (BOOL)isEnabled;
+ (BOOL)hasConvertibleProviderInObjects:(id)arg1;
+ (id)itemProviderWithObject:(id)arg1;
+ (id)fileItemProviderWithFileName:(id)arg1 filePath:(id)arg2;
+ (id)imageItemProviderWithFileName:(id)arg1 filePath:(id)arg2;
+ (id)videoItemProviderWithFileName:(id)arg1 filePath:(id)arg2;
+ (id)itemProviderWithFileName:(id)arg1 filePath:(id)arg2 typeIdentifiers:(id)arg3 nameTypeIdentifier:(id)arg4;
+ (id)uniqueTypeIdentifiers:(id)arg1;
+ (id)typeIdentifierWithFilePath:(id)arg1 fallback:(id)arg2;
+ (id)safeFileName:(id)arg1 filePath:(id)arg2 defaultName:(id)arg3 defaultExtension:(id)arg4;
@end
