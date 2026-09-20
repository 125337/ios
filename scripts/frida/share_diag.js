// 精确列出 SystemGroup 所有目录 + 每个 Library 第一层
var fm = ObjC.classes.NSFileManager.defaultManager();
var sg = '/var/containers/Shared/SystemGroup/';
var dirs = fm.contentsOfDirectoryAtPath_error_(sg, NULL);
console.log('total: ' + dirs.count());
for (var i = 0; i < dirs.count(); i++) {
  var d = String(dirs.objectAtIndex_(i));
  var lib = sg + d + '/Library/';
  var items = fm.contentsOfDirectoryAtPath_error_(lib, NULL);
  if (!items) { console.log(d + ' : <no Library>'); continue; }
  var names = [];
  for (var j = 0; j < items.count(); j++) names.push(String(items.objectAtIndex_(j)));
  console.log(d + ' : ' + names.join(' ').substring(0, 300));
}
