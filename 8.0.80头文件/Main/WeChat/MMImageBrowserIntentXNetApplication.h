@interface MMImageBrowserIntentXNetApplication : MMXNetImageApplication <WeVisResourceObserver>
- (id)init;
- (void)dealloc;
- (id)getThreadName;
- (id)modelFiles;
- (id)modelPath;
- (void)onWeVisResourceUpdated:(id)arg1;
@end
