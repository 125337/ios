'use strict';
var FOUND = { plugin: null, rule: null, reason: null, lastOp: null };

function desc(o) {
  try {
    if (o === null || o === undefined) return 'nil';
    var r = ObjC.object(o);
    var s = r.toString();
    return s.substring(0, 1000);
  } catch (e) { return '<unprintable ' + e.message + '>'; }
}

function report(tag) {
  console.log('\n########## CAUGHT ' + tag + ' ##########');
  console.log('plugin=' + FOUND.plugin);
  console.log('rule=' + FOUND.rule);
  console.log('lastUTIOp=' + FOUND.lastOp);
  console.log('reason=' + FOUND.reason);
}

try {
  var PKDPlugIn = ObjC.classes.PKDPlugIn;
  Interceptor.attach(PKDPlugIn['- match:discoveryInstanceUUID:server:'].implementation, {
    onEnter: function (args) {
      var self = ObjC.object(args[0]);
      try {
        FOUND.plugin = desc(self.pluginIdentifier());
        console.log('[match] ' + FOUND.plugin);
      } catch (e) {
        FOUND.plugin = '<no id: ' + e.message + '>';
      }
    }
  });
  console.log('[*] hook PKDPlugIn ok');
} catch (e) { console.log('hook PKDPlugIn fail: ' + e.message); }

try {
  var NSUTI = ObjC.classes.NSUTIPredicateOperator;
  Interceptor.attach(NSUTI['- performPrimitiveOperationUsingObject:andObject:'].implementation, {
    onEnter: function (args) {
      var self = ObjC.object(args[0]);
      var op = 'unknown';
      try { op = desc(self.operatorType()); } catch (e) {}
      FOUND.lastOp = desc(args[2]) + ' <OP:' + op + '> ' + desc(args[3]);
      console.log('[utiop] ' + FOUND.lastOp.substring(0, 300));
    }
  });
  console.log('[*] hook NSUTIPredicateOperator ok');
} catch (e) { console.log('hook NSUTI fail: ' + e.message); }

try {
  Interceptor.attach(ObjC.classes.NSException['- raise'].implementation, {
    onEnter: function (args) {
      var exc = ObjC.object(args[0]);
      FOUND.reason = desc(exc.name()) + ': ' + desc(exc.reason());
      console.log('\n!!! EXCEPTION RAISE !!!');
      console.log(FOUND.reason);
      console.log('lastMatchedPlugin=' + FOUND.plugin);
      console.log('lastRule=' + FOUND.rule);
      console.log('lastUTIOp=' + FOUND.lastOp);
    }
  });
  console.log('[*] hook NSException.raise ok');
} catch (e) { console.log('hook NSException fail: ' + e.message); }

try {
  var h = new ObjC.Block({ retType: 'void', argTypes: ['object'], implementation: function (exc) {
    FOUND.reason = desc(exc.name()) + ': ' + desc(exc.reason());
    report('uncaughtHandler');
    send('PKD_UNCAUGHT_EXCEPTION');
  }});
  var setHandler = new NativeFunction(
    Module.getGlobalExportByName('NSSetUncaughtExceptionHandler'), 'void', ['pointer']);
  setHandler(h);
  console.log('[*] uncaught handler installed');
} catch (e) { console.log('uncaught handler fail: ' + e.message); }

try {
  var EXC = ObjC.classes.EXConcreteExtension;
  Interceptor.attach(EXC['+ _evaluateActivationRuleWithoutWorkarounds:withExtensionItemsRepresentation:'].implementation, {
    onEnter: function (args) {
      FOUND.rule = desc(args[2]);
      console.log('[evalRule] ' + FOUND.rule.substring(0, 500));
    }
  });
  console.log('[*] hook EXConcreteExtension ok');
} catch (e) { console.log('hook EXConcrete fail: ' + e.message); }

try {
  Interceptor.attach(Module.getGlobalExportByName('abort'), {
    onEnter: function () {
      report('ABORT');
      send('PKD_ABOUT_TO_ABORT');
    }
  });
  console.log('[*] hook abort ok');
} catch (e) { console.log('hook abort fail: ' + e.message); }

console.log('[*] all pkd hooks installed, ready');
