#pragma once
#include "DotNetHelper.h"

#include "System/Object.h"
#include "System/ICloneable.h"
#include "System/Collections/IEnumerable.h"
#include "System/Collections/ICollection.h"
#include "System/Collections/IList.h"
#include "System/Array.h"
#include "System/ValueType.h"
#include "System/Collections/IEnumerator.h"
#include "System/IDisposable.h"
#include "System/IComparable.h"
#include "System/IFormattable.h"
#include "System/IConvertible.h"
#include "System/Enum.h"
#include "System/String.h"
#include "System/StringSplitOptions.h"
#include "System/Collections/IComparer.h"
#include "System/Collections/IEqualityComparer.h"
#include "System/StringComparer.h"
#include "System/StringComparison.h"
#include "System/Runtime/Serialization/ISerializable.h"
#include "System/Text/StringBuilder.h"
#include "System/Runtime/InteropServices/_Exception.h"
#include "System/Exception.h"
#include "System/DateTime.h"
#include "System/DateTimeKind.h"
#include "System/Runtime/Serialization/IDeserializationCallback.h"
#include "System/DateTimeOffset.h"
#include "System/SystemException.h"
#include "System/OutOfMemoryException.h"
#include "System/StackOverflowException.h"
#include "System/DataMisalignedException.h"
#include "System/ExecutionEngineException.h"
#include "System/Delegate.h"
#include "System/MulticastDelegate.h"
#include "System/MemberAccessException.h"
#include "System/Runtime/InteropServices/_Activator.h"
#include "System/Activator.h"
#include "System/AccessViolationException.h"
#include "System/Runtime/Hosting/ApplicationActivator.h"
#include "System/ApplicationException.h"
#include "System/EventArgs.h"
#include "System/ResolveEventArgs.h"
#include "System/AssemblyLoadEventArgs.h"
#include "System/ResolveEventHandler.h"
#include "System/AssemblyLoadEventHandler.h"
#include "System/AppDomainInitializer.h"
#include "System/MarshalByRefObject.h"
#include "System/_AppDomain.h"
#include "System/Security/IEvidenceFactory.h"
#include "System/AppDomain.h"
#include "System/CrossAppDomainDelegate.h"
#include "System/AppDomainManagerInitializationOptions.h"
#include "System/AppDomainManager.h"
#include "System/IAppDomainSetup.h"
#include "System/AppDomainSetup.h"
#include "System/LoaderOptimization.h"
#include "System/Runtime/InteropServices/_Attribute.h"
#include "System/Attribute.h"
#include "System/LoaderOptimizationAttribute.h"
#include "System/AppDomainUnloadedException.h"
#include "System/Runtime/Hosting/ActivationArguments.h"
#include "System/ActivationContext.h"
#include "System/ApplicationIdentity.h"
#include "System/Deployment/Internal/InternalApplicationIdentityHelper.h"
#include "System/Deployment/Internal/InternalActivationContextHelper.h"
#include "System/ApplicationId.h"
#include "System/ArgumentException.h"
#include "System/ArgumentNullException.h"
#include "System/ArgumentOutOfRangeException.h"
#include "System/ArgIterator.h"
#include "System/ArithmeticException.h"
#include "System/ArrayTypeMismatchException.h"
#include "System/AsyncCallback.h"
#include "System/AttributeTargets.h"
#include "System/AttributeUsageAttribute.h"
#include "System/BadImageFormatException.h"
#include "System/BitConverter.h"
#include "System/Boolean.h"
#include "System/Buffer.h"
#include "System/Byte.h"
#include "System/CannotUnloadAppDomainException.h"
#include "System/Char.h"
#include "System/CharEnumerator.h"
#include "System/CLSCompliantAttribute.h"
#include "System/TypeUnloadedException.h"
#include "System/Runtime/InteropServices/_Thread.h"
#include "System/Console.h"
#include "System/Runtime/ConstrainedExecution/CriticalFinalizerObject.h"
#include "System/ConsoleCancelEventHandler.h"
#include "System/ConsoleCancelEventArgs.h"
#include "System/ConsoleColor.h"
#include "System/ConsoleKey.h"
#include "System/ConsoleKeyInfo.h"
#include "System/ConsoleModifiers.h"
#include "System/ConsoleSpecialKey.h"
#include "System/ContextMarshalException.h"
#include "System/Convert.h"
#include "System/Base64FormattingOptions.h"
#include "System/ContextBoundObject.h"
#include "System/ContextStaticAttribute.h"
#include "System/Runtime/CompilerServices/StringFreezingAttribute.h"
#include "System/TimeZone.h"
#include "System/DayOfWeek.h"
#include "System/DBNull.h"
#include "System/Decimal.h"
#include "System/Reflection/Binder.h"
#include "System/Runtime/Serialization/IObjectReference.h"
#include "System/DivideByZeroException.h"
#include "System/Double.h"
#include "System/DuplicateWaitObjectException.h"
#include "System/TypeLoadException.h"
#include "System/EntryPointNotFoundException.h"
#include "System/DllNotFoundException.h"
#include "System/EnvironmentVariableTarget.h"
#include "System/Environment.h"
#include "System/EventHandler.h"
#include "System/FieldAccessException.h"
#include "System/FlagsAttribute.h"
#include "System/FormatException.h"
#include "System/GCCollectionMode.h"
#include "System/GCNotificationStatus.h"
#include "System/GC.h"
#include "System/Guid.h"
#include "System/IAsyncResult.h"
#include "System/ICustomFormatter.h"
#include "System/IFormatProvider.h"
#include "System/IndexOutOfRangeException.h"
#include "System/InsufficientMemoryException.h"
#include "System/Int16.h"
#include "System/Int32.h"
#include "System/Int64.h"
#include "System/IntPtr.h"
#include "System/InvalidCastException.h"
#include "System/InvalidOperationException.h"
#include "System/InvalidProgramException.h"
#include "System/IServiceProvider.h"
#include "System/LocalDataStoreSlot.h"
#include "System/Math.h"
#include "System/MethodAccessException.h"
#include "System/MidpointRounding.h"
#include "System/MissingMemberException.h"
#include "System/MissingFieldException.h"
#include "System/MissingMethodException.h"
#include "System/MulticastNotSupportedException.h"
#include "System/NonSerializedAttribute.h"
#include "System/NotFiniteNumberException.h"
#include "System/NotImplementedException.h"
#include "System/NotSupportedException.h"
#include "System/NullReferenceException.h"
#include "System/ObjectDisposedException.h"
#include "System/ObsoleteAttribute.h"
#include "System/OperatingSystem.h"
#include "System/OperationCanceledException.h"
#include "System/OverflowException.h"
#include "System/ParamArrayAttribute.h"
#include "System/PlatformID.h"
#include "System/PlatformNotSupportedException.h"
#include "System/Random.h"
#include "System/RankException.h"
#include "System/Reflection/ICustomAttributeProvider.h"
#include "System/Runtime/InteropServices/_MemberInfo.h"
#include "System/Reflection/MemberInfo.h"
#include "System/Runtime/InteropServices/_Type.h"
#include "System/Reflection/IReflect.h"
#include "System/Type.h"
#include "System/RuntimeArgumentHandle.h"
#include "System/RuntimeTypeHandle.h"
#include "System/RuntimeMethodHandle.h"
#include "System/RuntimeFieldHandle.h"
#include "System/ModuleHandle.h"
#include "System/SByte.h"
#include "System/SerializableAttribute.h"
#include "System/Single.h"
#include "System/TimeoutException.h"
#include "System/TimeSpan.h"
#include "System/TypeCode.h"
#include "System/TypedReference.h"
#include "System/TypeInitializationException.h"
#include "System/UInt16.h"
#include "System/UInt32.h"
#include "System/UInt64.h"
#include "System/UIntPtr.h"
#include "System/UnauthorizedAccessException.h"
#include "System/UnhandledExceptionEventArgs.h"
#include "System/UnhandledExceptionEventHandler.h"
#include "System/Version.h"
#include "System/Void.h"
#include "System/WeakReference.h"
#include "System/Threading/AbandonedMutexException.h"
#include "System/Threading/WaitHandle.h"
#include "System/Threading/EventWaitHandle.h"
#include "System/Threading/AutoResetEvent.h"
#include "System/Threading/SendOrPostCallback.h"
#include "System/Threading/SynchronizationContext.h"
#include "System/Runtime/InteropServices/SafeHandle.h"
#include "System/Threading/CompressedStack.h"
#include "System/Threading/EventResetMode.h"
#include "System/Threading/AsyncFlowControl.h"
#include "System/Threading/ContextCallback.h"
#include "System/Threading/ExecutionContext.h"
#include "System/Threading/Interlocked.h"
#include "System/Runtime/Remoting/IObjectHandle.h"
#include "System/Threading/HostExecutionContext.h"
#include "System/Threading/HostExecutionContextManager.h"
#include "System/Threading/LockCookie.h"
#include "System/Threading/ManualResetEvent.h"
#include "System/Threading/Monitor.h"
#include "System/Threading/Mutex.h"
#include "System/Threading/NativeOverlapped.h"
#include "System/Threading/Overlapped.h"
#include "System/Threading/ParameterizedThreadStart.h"
#include "System/Threading/ReaderWriterLock.h"
#include "System/Threading/SynchronizationLockException.h"
#include "System/Threading/Thread.h"
#include "System/Threading/ThreadAbortException.h"
#include "System/Threading/ThreadInterruptedException.h"
#include "System/Threading/RegisteredWaitHandle.h"
#include "System/Threading/WaitCallback.h"
#include "System/Threading/WaitOrTimerCallback.h"
#include "System/Threading/IOCompletionCallback.h"
#include "System/Threading/ThreadPool.h"
#include "System/Threading/ThreadPriority.h"
#include "System/Threading/ThreadStart.h"
#include "System/Threading/ThreadState.h"
#include "System/Threading/ThreadStateException.h"
#include "System/ThreadStaticAttribute.h"
#include "System/Threading/ThreadStartException.h"
#include "System/Threading/Timeout.h"
#include "System/Threading/TimerCallback.h"
#include "System/Threading/Timer.h"
#include "System/Threading/WaitHandleCannotBeOpenedException.h"
#include "System/Threading/ApartmentState.h"
#include "System/STAThreadAttribute.h"
#include "System/MTAThreadAttribute.h"
#include "System/Collections/ArrayList.h"
#include "System/Collections/BitArray.h"
#include "System/Collections/CaseInsensitiveComparer.h"
#include "System/Collections/IHashCodeProvider.h"
#include "System/Collections/CaseInsensitiveHashCodeProvider.h"
#include "System/Collections/CollectionBase.h"
#include "System/Collections/Comparer.h"
#include "System/Collections/IDictionary.h"
#include "System/Collections/DictionaryBase.h"
#include "System/Collections/DictionaryEntry.h"
#include "System/Collections/IDictionaryEnumerator.h"
#include "System/Collections/Hashtable.h"
#include "System/Collections/Queue.h"
#include "System/Collections/ReadOnlyCollectionBase.h"
#include "System/Collections/SortedList.h"
#include "System/Collections/Stack.h"
#include "System/Nullable.h"
#include "System/Collections/Generic/KeyNotFoundException.h"
#include "System/Diagnostics/ConditionalAttribute.h"
#include "System/Diagnostics/Debugger.h"
#include "System/Diagnostics/DebuggerStepThroughAttribute.h"
#include "System/Diagnostics/DebuggerStepperBoundaryAttribute.h"
#include "System/Diagnostics/DebuggerHiddenAttribute.h"
#include "System/Diagnostics/DebuggerNonUserCodeAttribute.h"
#include "System/Diagnostics/DebuggableAttribute.h"
#include "System/Diagnostics/DebuggerBrowsableState.h"
#include "System/Diagnostics/DebuggerBrowsableAttribute.h"
#include "System/Diagnostics/DebuggerTypeProxyAttribute.h"
#include "System/Diagnostics/DebuggerDisplayAttribute.h"
#include "System/Diagnostics/DebuggerVisualizerAttribute.h"
#include "System/Diagnostics/StackTrace.h"
#include "System/Diagnostics/StackFrame.h"
#include "System/Diagnostics/CodeAnalysis/SuppressMessageAttribute.h"
#include "System/Diagnostics/SymbolStore/ISymbolBinder.h"
#include "System/Diagnostics/SymbolStore/ISymbolBinder1.h"
#include "System/Diagnostics/SymbolStore/ISymbolDocument.h"
#include "System/Diagnostics/SymbolStore/ISymbolDocumentWriter.h"
#include "System/Diagnostics/SymbolStore/ISymbolMethod.h"
#include "System/Diagnostics/SymbolStore/ISymbolNamespace.h"
#include "System/Diagnostics/SymbolStore/ISymbolReader.h"
#include "System/Diagnostics/SymbolStore/ISymbolScope.h"
#include "System/Diagnostics/SymbolStore/ISymbolVariable.h"
#include "System/Diagnostics/SymbolStore/ISymbolWriter.h"
#include "System/Diagnostics/SymbolStore/SymAddressKind.h"
#include "System/Diagnostics/SymbolStore/SymDocumentType.h"
#include "System/Diagnostics/SymbolStore/SymLanguageType.h"
#include "System/Diagnostics/SymbolStore/SymLanguageVendor.h"
#include "System/Diagnostics/SymbolStore/SymbolToken.h"
#include "System/Reflection/AmbiguousMatchException.h"
#include "System/Reflection/ModuleResolveEventHandler.h"
#include "System/Runtime/InteropServices/_Assembly.h"
#include "System/Reflection/Assembly.h"
#include "System/Reflection/AssemblyCopyrightAttribute.h"
#include "System/Reflection/AssemblyTrademarkAttribute.h"
#include "System/Reflection/AssemblyProductAttribute.h"
#include "System/Reflection/AssemblyCompanyAttribute.h"
#include "System/Reflection/AssemblyDescriptionAttribute.h"
#include "System/Reflection/AssemblyTitleAttribute.h"
#include "System/Reflection/AssemblyConfigurationAttribute.h"
#include "System/Reflection/AssemblyDefaultAliasAttribute.h"
#include "System/Reflection/AssemblyInformationalVersionAttribute.h"
#include "System/Reflection/AssemblyFileVersionAttribute.h"
#include "System/Reflection/AssemblyCultureAttribute.h"
#include "System/Reflection/AssemblyVersionAttribute.h"
#include "System/Reflection/AssemblyKeyFileAttribute.h"
#include "System/Reflection/AssemblyDelaySignAttribute.h"
#include "System/Reflection/AssemblyAlgorithmIdAttribute.h"
#include "System/Reflection/AssemblyFlagsAttribute.h"
#include "System/Reflection/AssemblyKeyNameAttribute.h"
#include "System/Runtime/InteropServices/_AssemblyName.h"
#include "System/Reflection/AssemblyName.h"
#include "System/Reflection/AssemblyNameProxy.h"
#include "System/Reflection/AssemblyNameFlags.h"
#include "System/Reflection/ProcessorArchitecture.h"
#include "System/Reflection/CustomAttributeFormatException.h"
#include "System/Reflection/BindingFlags.h"
#include "System/Reflection/CallingConventions.h"
#include "System/Runtime/InteropServices/_MethodBase.h"
#include "System/Runtime/InteropServices/_MethodInfo.h"
#include "System/Runtime/InteropServices/_ConstructorInfo.h"
#include "System/Runtime/InteropServices/_FieldInfo.h"
#include "System/Runtime/InteropServices/_PropertyInfo.h"
#include "System/Runtime/InteropServices/_EventInfo.h"
#include "System/Runtime/InteropServices/_ParameterInfo.h"
#include "System/Runtime/InteropServices/_Module.h"
#include "System/Reflection/CustomAttributeData.h"
#include "System/Reflection/CustomAttributeNamedArgument.h"
#include "System/Reflection/CustomAttributeTypedArgument.h"
#include "System/Reflection/DefaultMemberAttribute.h"
#include "System/Reflection/EventAttributes.h"
#include "System/Reflection/FieldAttributes.h"
#include "System/Reflection/GenericParameterAttributes.h"
#include "System/Reflection/InterfaceMapping.h"
#include "System/Reflection/InvalidFilterCriteriaException.h"
#include "System/Reflection/ManifestResourceInfo.h"
#include "System/Reflection/ResourceLocation.h"
#include "System/Reflection/MemberFilter.h"
#include "System/Reflection/MemberTypes.h"
#include "System/Reflection/MethodAttributes.h"
#include "System/Reflection/MethodImplAttributes.h"
#include "System/Reflection/Missing.h"
#include "System/Reflection/PortableExecutableKinds.h"
#include "System/Reflection/ImageFileMachine.h"
#include "System/Reflection/Module.h"
#include "System/Reflection/ObfuscateAssemblyAttribute.h"
#include "System/Reflection/ObfuscationAttribute.h"
#include "System/Reflection/ExceptionHandlingClauseOptions.h"
#include "System/Reflection/ExceptionHandlingClause.h"
#include "System/Reflection/MethodBody.h"
#include "System/Reflection/LocalVariableInfo.h"
#include "System/Reflection/ParameterAttributes.h"
#include "System/Reflection/ParameterModifier.h"
#include "System/Reflection/Pointer.h"
#include "System/Reflection/PropertyAttributes.h"
#include "System/Reflection/ReflectionTypeLoadException.h"
#include "System/Reflection/ResourceAttributes.h"
#include "System/Reflection/StrongNameKeyPair.h"
#include "System/Reflection/TargetException.h"
#include "System/Reflection/TargetInvocationException.h"
#include "System/Reflection/TargetParameterCountException.h"
#include "System/Reflection/TypeAttributes.h"
#include "System/Reflection/TypeDelegator.h"
#include "System/Reflection/TypeFilter.h"
#include "System/Reflection/MethodBase.h"
#include "System/Reflection/ConstructorInfo.h"
#include "System/Reflection/MethodInfo.h"
#include "System/Reflection/FieldInfo.h"
#include "System/Reflection/EventInfo.h"
#include "System/Reflection/PropertyInfo.h"
#include "System/Reflection/ParameterInfo.h"
#include "System/Runtime/Serialization/IFormatter.h"
#include "System/Runtime/Serialization/Formatter.h"
#include "System/Runtime/Serialization/IFormatterConverter.h"
#include "System/Runtime/Serialization/FormatterConverter.h"
#include "System/Runtime/Serialization/FormatterServices.h"
#include "System/Runtime/Serialization/ISerializationSurrogate.h"
#include "System/Runtime/Serialization/ISurrogateSelector.h"
#include "System/Runtime/Serialization/ObjectIDGenerator.h"
#include "System/Runtime/Serialization/ObjectManager.h"
#include "System/Runtime/Serialization/SerializationObjectManager.h"
#include "System/Runtime/Serialization/OptionalFieldAttribute.h"
#include "System/Runtime/Serialization/OnSerializingAttribute.h"
#include "System/Runtime/Serialization/OnSerializedAttribute.h"
#include "System/Runtime/Serialization/OnDeserializingAttribute.h"
#include "System/Runtime/Serialization/OnDeserializedAttribute.h"
#include "System/Runtime/Serialization/SerializationBinder.h"
#include "System/Runtime/Serialization/SerializationInfo.h"
#include "System/Runtime/Serialization/SerializationEntry.h"
#include "System/Runtime/Serialization/SerializationInfoEnumerator.h"
#include "System/Runtime/Serialization/SerializationException.h"
#include "System/Runtime/Serialization/StreamingContext.h"
#include "System/Runtime/Serialization/StreamingContextStates.h"
#include "System/Runtime/Serialization/SurrogateSelector.h"
#include "System/Globalization/Calendar.h"
#include "System/Globalization/CalendarAlgorithmType.h"
#include "System/Globalization/CalendarWeekRule.h"
#include "System/Globalization/CharUnicodeInfo.h"
#include "System/Globalization/EastAsianLunisolarCalendar.h"
#include "System/Globalization/ChineseLunisolarCalendar.h"
#include "System/Globalization/CompareOptions.h"
#include "System/Globalization/CompareInfo.h"
#include "System/Globalization/CultureInfo.h"
#include "System/Globalization/CultureTypes.h"
#include "System/Globalization/DateTimeStyles.h"
#include "System/Globalization/DateTimeFormatInfo.h"
#include "System/Globalization/DaylightTime.h"
#include "System/Globalization/DigitShapes.h"
#include "System/Globalization/GregorianCalendar.h"
#include "System/Globalization/GregorianCalendarTypes.h"
#include "System/Globalization/HebrewCalendar.h"
#include "System/Globalization/HijriCalendar.h"
#include "System/Globalization/IdnMapping.h"
#include "System/Globalization/JapaneseCalendar.h"
#include "System/Globalization/JapaneseLunisolarCalendar.h"
#include "System/Globalization/PersianCalendar.h"
#include "System/Globalization/JulianCalendar.h"
#include "System/Globalization/KoreanCalendar.h"
#include "System/Globalization/KoreanLunisolarCalendar.h"
#include "System/Globalization/RegionInfo.h"
#include "System/Globalization/SortKey.h"
#include "System/Globalization/StringInfo.h"
#include "System/Globalization/TaiwanCalendar.h"
#include "System/Globalization/TaiwanLunisolarCalendar.h"
#include "System/Globalization/TextElementEnumerator.h"
#include "System/Globalization/TextInfo.h"
#include "System/Globalization/ThaiBuddhistCalendar.h"
#include "System/Globalization/NumberFormatInfo.h"
#include "System/Globalization/NumberStyles.h"
#include "System/Globalization/UmAlQuraCalendar.h"
#include "System/Globalization/UnicodeCategory.h"
#include "Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.h"
#include "System/Text/Encoding.h"
#include "System/Text/Encoder.h"
#include "System/Text/Decoder.h"
#include "System/Text/ASCIIEncoding.h"
#include "System/Text/DecoderFallback.h"
#include "System/Text/DecoderFallbackBuffer.h"
#include "System/Text/DecoderExceptionFallback.h"
#include "System/Text/DecoderExceptionFallbackBuffer.h"
#include "System/Text/DecoderFallbackException.h"
#include "System/Text/DecoderReplacementFallback.h"
#include "System/Text/DecoderReplacementFallbackBuffer.h"
#include "System/Text/EncoderFallback.h"
#include "System/Text/EncoderFallbackBuffer.h"
#include "System/Text/EncoderExceptionFallback.h"
#include "System/Text/EncoderExceptionFallbackBuffer.h"
#include "System/Text/EncoderFallbackException.h"
#include "System/Text/EncoderReplacementFallback.h"
#include "System/Text/EncoderReplacementFallbackBuffer.h"
#include "System/Text/EncodingInfo.h"
#include "System/Text/NormalizationForm.h"
#include "System/Text/UnicodeEncoding.h"
#include "System/Text/UTF7Encoding.h"
#include "System/Text/UTF8Encoding.h"
#include "System/Text/UTF32Encoding.h"
#include "System/Resources/IResourceReader.h"
#include "System/Resources/IResourceWriter.h"
#include "System/Resources/MissingManifestResourceException.h"
#include "System/Resources/MissingSatelliteAssemblyException.h"
#include "System/Resources/NeutralResourcesLanguageAttribute.h"
#include "System/Resources/ResourceManager.h"
#include "System/Resources/ResourceReader.h"
#include "System/Resources/ResourceSet.h"
#include "System/Resources/ResourceWriter.h"
#include "System/Resources/SatelliteContractVersionAttribute.h"
#include "System/Resources/UltimateResourceFallbackLocation.h"
#include "Microsoft/Win32/Registry.h"
#include "Microsoft/Win32/RegistryHive.h"
#include "Microsoft/Win32/RegistryKey.h"
#include "Microsoft/Win32/RegistryValueOptions.h"
#include "Microsoft/Win32/RegistryKeyPermissionCheck.h"
#include "Microsoft/Win32/RegistryValueKind.h"
#include "Microsoft/Win32/SafeHandles/SafeFileHandle.h"
#include "Microsoft/Win32/SafeHandles/SafeWaitHandle.h"
#include "Microsoft/Win32/SafeHandles/SafeHandleMinusOneIsInvalid.h"
#include "System/Runtime/InteropServices/CriticalHandle.h"
#include "Microsoft/Win32/SafeHandles/CriticalHandleZeroOrMinusOneIsInvalid.h"
#include "Microsoft/Win32/SafeHandles/CriticalHandleMinusOneIsInvalid.h"
#include "System/Security/ISecurityEncodable.h"
#include "System/Security/ISecurityPolicyEncodable.h"
#include "System/Security/Policy/IMembershipCondition.h"
#include "System/Security/Policy/AllMembershipCondition.h"
#include "System/Security/Policy/ApplicationDirectory.h"
#include "System/Security/Policy/ApplicationDirectoryMembershipCondition.h"
#include "System/Security/Policy/ApplicationSecurityInfo.h"
#include "System/Security/Policy/ApplicationSecurityManager.h"
#include "System/Security/Policy/ApplicationVersionMatch.h"
#include "System/Security/Policy/ApplicationTrust.h"
#include "System/Security/Policy/ApplicationTrustCollection.h"
#include "System/Security/Policy/ApplicationTrustEnumerator.h"
#include "System/Security/Policy/CodeGroup.h"
#include "System/Security/Policy/Evidence.h"
#include "System/Security/Policy/FileCodeGroup.h"
#include "System/Security/Policy/FirstMatchCodeGroup.h"
#include "System/Security/Policy/IIdentityPermissionFactory.h"
#include "System/Security/Policy/IApplicationTrustManager.h"
#include "System/Security/Policy/TrustManagerUIContext.h"
#include "System/Security/Policy/TrustManagerContext.h"
#include "System/Security/Policy/CodeConnectAccess.h"
#include "System/Security/Policy/NetCodeGroup.h"
#include "System/Security/Policy/PermissionRequestEvidence.h"
#include "System/Security/Policy/PolicyException.h"
#include "System/Security/Policy/PolicyLevel.h"
#include "System/Security/Policy/PolicyStatementAttribute.h"
#include "System/Security/Policy/PolicyStatement.h"
#include "System/Security/Policy/Site.h"
#include "System/Security/Policy/SiteMembershipCondition.h"
#include "System/Security/Policy/StrongName.h"
#include "System/Security/Policy/StrongNameMembershipCondition.h"
#include "System/Security/Policy/UnionCodeGroup.h"
#include "System/Security/Policy/Url.h"
#include "System/Security/Policy/UrlMembershipCondition.h"
#include "System/Security/Policy/Zone.h"
#include "System/Security/Policy/ZoneMembershipCondition.h"
#include "System/Security/Policy/GacInstalled.h"
#include "System/Security/Policy/GacMembershipCondition.h"
#include "System/Security/Policy/Hash.h"
#include "System/Security/Policy/HashMembershipCondition.h"
#include "System/Security/Policy/Publisher.h"
#include "System/Security/Policy/PublisherMembershipCondition.h"
#include "System/Security/Principal/IIdentity.h"
#include "System/Security/Principal/GenericIdentity.h"
#include "System/Security/Principal/IPrincipal.h"
#include "System/Security/Principal/GenericPrincipal.h"
#include "System/Security/Principal/PrincipalPolicy.h"
#include "System/Security/Principal/WindowsAccountType.h"
#include "System/Security/Principal/TokenImpersonationLevel.h"
#include "System/Security/Principal/TokenAccessLevels.h"
#include "System/Security/Principal/WindowsIdentity.h"
#include "System/Security/Principal/WindowsImpersonationContext.h"
#include "System/Security/Principal/WindowsBuiltInRole.h"
#include "System/Security/Principal/WindowsPrincipal.h"
#include "System/Runtime/ConstrainedExecution/Consistency.h"
#include "System/Runtime/ConstrainedExecution/Cer.h"
#include "System/Runtime/ConstrainedExecution/ReliabilityContractAttribute.h"
#include "System/Runtime/ConstrainedExecution/PrePrepareMethodAttribute.h"
#include "System/Runtime/InteropServices/ArrayWithOffset.h"
#include "System/Runtime/InteropServices/UnmanagedFunctionPointerAttribute.h"
#include "System/Runtime/InteropServices/AllowReversePInvokeCallsAttribute.h"
#include "System/Runtime/InteropServices/DispIdAttribute.h"
#include "System/Runtime/InteropServices/ComInterfaceType.h"
#include "System/Runtime/InteropServices/InterfaceTypeAttribute.h"
#include "System/Runtime/InteropServices/ComDefaultInterfaceAttribute.h"
#include "System/Runtime/InteropServices/ClassInterfaceType.h"
#include "System/Runtime/InteropServices/ClassInterfaceAttribute.h"
#include "System/Runtime/InteropServices/ComVisibleAttribute.h"
#include "System/Runtime/InteropServices/TypeLibImportClassAttribute.h"
#include "System/Runtime/InteropServices/LCIDConversionAttribute.h"
#include "System/Runtime/InteropServices/ComRegisterFunctionAttribute.h"
#include "System/Runtime/InteropServices/ComUnregisterFunctionAttribute.h"
#include "System/Runtime/InteropServices/ProgIdAttribute.h"
#include "System/Runtime/InteropServices/ImportedFromTypeLibAttribute.h"
#include "System/Runtime/InteropServices/IDispatchImplType.h"
#include "System/Runtime/InteropServices/IDispatchImplAttribute.h"
#include "System/Runtime/InteropServices/ComSourceInterfacesAttribute.h"
#include "System/Runtime/InteropServices/ComConversionLossAttribute.h"
#include "System/Runtime/InteropServices/TypeLibTypeFlags.h"
#include "System/Runtime/InteropServices/TypeLibFuncFlags.h"
#include "System/Runtime/InteropServices/TypeLibVarFlags.h"
#include "System/Runtime/InteropServices/TypeLibTypeAttribute.h"
#include "System/Runtime/InteropServices/TypeLibFuncAttribute.h"
#include "System/Runtime/InteropServices/TypeLibVarAttribute.h"
#include "System/Runtime/InteropServices/VarEnum.h"
#include "System/Runtime/InteropServices/UnmanagedType.h"
#include "System/Runtime/InteropServices/MarshalAsAttribute.h"
#include "System/Runtime/InteropServices/ComImportAttribute.h"
#include "System/Runtime/InteropServices/GuidAttribute.h"
#include "System/Runtime/InteropServices/PreserveSigAttribute.h"
#include "System/Runtime/InteropServices/InAttribute.h"
#include "System/Runtime/InteropServices/OutAttribute.h"
#include "System/Runtime/InteropServices/OptionalAttribute.h"
#include "System/Runtime/InteropServices/DllImportAttribute.h"
#include "System/Runtime/InteropServices/StructLayoutAttribute.h"
#include "System/Runtime/InteropServices/FieldOffsetAttribute.h"
#include "System/Runtime/InteropServices/ComAliasNameAttribute.h"
#include "System/Runtime/InteropServices/AutomationProxyAttribute.h"
#include "System/Runtime/InteropServices/PrimaryInteropAssemblyAttribute.h"
#include "System/Runtime/InteropServices/CoClassAttribute.h"
#include "System/Runtime/InteropServices/ComEventInterfaceAttribute.h"
#include "System/Runtime/InteropServices/TypeLibVersionAttribute.h"
#include "System/Runtime/InteropServices/ComCompatibleVersionAttribute.h"
#include "System/Runtime/InteropServices/BestFitMappingAttribute.h"
#include "System/Runtime/InteropServices/DefaultCharSetAttribute.h"
#include "System/Runtime/InteropServices/SetWin32ContextInIDispatchAttribute.h"
#include "System/Runtime/InteropServices/CallingConvention.h"
#include "System/Runtime/InteropServices/CharSet.h"
#include "System/Runtime/InteropServices/ExternalException.h"
#include "System/Runtime/InteropServices/COMException.h"
#include "System/Runtime/InteropServices/GCHandleType.h"
#include "System/Runtime/InteropServices/GCHandle.h"
#include "System/Runtime/InteropServices/HandleRef.h"
#include "System/Runtime/InteropServices/ICustomMarshaler.h"
#include "System/Runtime/InteropServices/InvalidOleVariantTypeException.h"
#include "System/Runtime/InteropServices/LayoutKind.h"
#include "System/Runtime/InteropServices/Marshal.h"
#include "System/Runtime/InteropServices/ITypeLibImporterNotifySink.h"
#include "System/Runtime/InteropServices/MarshalDirectiveException.h"
#include "System/Runtime/InteropServices/RuntimeEnvironment.h"
#include "System/Runtime/InteropServices/SEHException.h"
#include "System/Runtime/InteropServices/BStrWrapper.h"
#include "System/Runtime/InteropServices/ComMemberType.h"
#include "System/Runtime/InteropServices/CurrencyWrapper.h"
#include "System/Runtime/InteropServices/DispatchWrapper.h"
#include "System/Runtime/InteropServices/ErrorWrapper.h"
#include "System/Runtime/InteropServices/ExtensibleClassFactory.h"
#include "System/Runtime/InteropServices/ICustomAdapter.h"
#include "System/Runtime/InteropServices/ICustomFactory.h"
#include "System/Runtime/InteropServices/InvalidComObjectException.h"
#include "System/Runtime/InteropServices/AssemblyRegistrationFlags.h"
#include "System/Runtime/InteropServices/IRegistrationServices.h"
#include "System/Runtime/InteropServices/TypeLibImporterFlags.h"
#include "System/Runtime/InteropServices/TypeLibExporterFlags.h"
#include "System/Runtime/InteropServices/ImporterEventKind.h"
#include "System/Runtime/InteropServices/ExporterEventKind.h"
#include "System/Runtime/InteropServices/ITypeLibExporterNotifySink.h"
#include "System/Runtime/InteropServices/ITypeLibConverter.h"
#include "System/Runtime/InteropServices/ITypeLibExporterNameProvider.h"
#include "System/Runtime/InteropServices/ObjectCreationDelegate.h"
#include "System/Runtime/InteropServices/RegistrationClassContext.h"
#include "System/Runtime/InteropServices/RegistrationConnectionType.h"
#include "System/Runtime/InteropServices/RegistrationServices.h"
#include "System/Runtime/InteropServices/SafeArrayRankMismatchException.h"
#include "System/Runtime/InteropServices/SafeArrayTypeMismatchException.h"
#include "System/Runtime/InteropServices/TypeLibConverter.h"
#include "System/Runtime/InteropServices/BIND_OPTS.h"
#include "System/Runtime/InteropServices/UCOMIBindCtx.h"
#include "System/Runtime/InteropServices/UCOMIConnectionPointContainer.h"
#include "System/Runtime/InteropServices/UCOMIConnectionPoint.h"
#include "System/Runtime/InteropServices/UCOMIEnumMoniker.h"
#include "System/Runtime/InteropServices/CONNECTDATA.h"
#include "System/Runtime/InteropServices/UCOMIEnumConnections.h"
#include "System/Runtime/InteropServices/UCOMIEnumConnectionPoints.h"
#include "System/Runtime/InteropServices/UCOMIEnumString.h"
#include "System/Runtime/InteropServices/UCOMIEnumVARIANT.h"
#include "System/Runtime/InteropServices/FILETIME.h"
#include "System/Runtime/InteropServices/UCOMIMoniker.h"
#include "System/Runtime/InteropServices/UCOMIPersistFile.h"
#include "System/Runtime/InteropServices/UCOMIRunningObjectTable.h"
#include "System/Runtime/InteropServices/STATSTG.h"
#include "System/Runtime/InteropServices/UCOMIStream.h"
#include "System/Runtime/InteropServices/DESCKIND.h"
#include "System/Runtime/InteropServices/BINDPTR.h"
#include "System/Runtime/InteropServices/UCOMITypeComp.h"
#include "System/Runtime/InteropServices/TYPEKIND.h"
#include "System/Runtime/InteropServices/TYPEFLAGS.h"
#include "System/Runtime/InteropServices/IMPLTYPEFLAGS.h"
#include "System/Runtime/InteropServices/TYPEATTR.h"
#include "System/Runtime/InteropServices/FUNCDESC.h"
#include "System/Runtime/InteropServices/IDLFLAG.h"
#include "System/Runtime/InteropServices/IDLDESC.h"
#include "System/Runtime/InteropServices/PARAMFLAG.h"
#include "System/Runtime/InteropServices/PARAMDESC.h"
#include "System/Runtime/InteropServices/TYPEDESC.h"
#include "System/Runtime/InteropServices/ELEMDESC.h"
#include "System/Runtime/InteropServices/VARDESC.h"
#include "System/Runtime/InteropServices/DISPPARAMS.h"
#include "System/Runtime/InteropServices/EXCEPINFO.h"
#include "System/Runtime/InteropServices/FUNCKIND.h"
#include "System/Runtime/InteropServices/INVOKEKIND.h"
#include "System/Runtime/InteropServices/CALLCONV.h"
#include "System/Runtime/InteropServices/FUNCFLAGS.h"
#include "System/Runtime/InteropServices/VARFLAGS.h"
#include "System/Runtime/InteropServices/UCOMITypeInfo.h"
#include "System/Runtime/InteropServices/SYSKIND.h"
#include "System/Runtime/InteropServices/LIBFLAGS.h"
#include "System/Runtime/InteropServices/TYPELIBATTR.h"
#include "System/Runtime/InteropServices/UCOMITypeLib.h"
#include "System/Runtime/InteropServices/UnknownWrapper.h"
#include "System/Runtime/InteropServices/VariantWrapper.h"
#include "System/Runtime/InteropServices/ComTypes/BIND_OPTS.h"
#include "System/Runtime/InteropServices/ComTypes/IBindCtx.h"
#include "System/Runtime/InteropServices/ComTypes/IConnectionPointContainer.h"
#include "System/Runtime/InteropServices/ComTypes/IConnectionPoint.h"
#include "System/Runtime/InteropServices/ComTypes/IEnumMoniker.h"
#include "System/Runtime/InteropServices/ComTypes/CONNECTDATA.h"
#include "System/Runtime/InteropServices/ComTypes/IEnumConnections.h"
#include "System/Runtime/InteropServices/ComTypes/IEnumConnectionPoints.h"
#include "System/Runtime/InteropServices/ComTypes/IEnumString.h"
#include "System/Runtime/InteropServices/ComTypes/IEnumVARIANT.h"
#include "System/Runtime/InteropServices/ComTypes/FILETIME.h"
#include "System/Runtime/InteropServices/ComTypes/IMoniker.h"
#include "System/Runtime/InteropServices/ComTypes/IPersistFile.h"
#include "System/Runtime/InteropServices/ComTypes/IRunningObjectTable.h"
#include "System/Runtime/InteropServices/ComTypes/STATSTG.h"
#include "System/Runtime/InteropServices/ComTypes/IStream.h"
#include "System/Runtime/InteropServices/ComTypes/DESCKIND.h"
#include "System/Runtime/InteropServices/ComTypes/BINDPTR.h"
#include "System/Runtime/InteropServices/ComTypes/ITypeComp.h"
#include "System/Runtime/InteropServices/ComTypes/TYPEKIND.h"
#include "System/Runtime/InteropServices/ComTypes/TYPEFLAGS.h"
#include "System/Runtime/InteropServices/ComTypes/IMPLTYPEFLAGS.h"
#include "System/Runtime/InteropServices/ComTypes/TYPEATTR.h"
#include "System/Runtime/InteropServices/ComTypes/FUNCDESC.h"
#include "System/Runtime/InteropServices/ComTypes/IDLFLAG.h"
#include "System/Runtime/InteropServices/ComTypes/IDLDESC.h"
#include "System/Runtime/InteropServices/ComTypes/PARAMFLAG.h"
#include "System/Runtime/InteropServices/ComTypes/PARAMDESC.h"
#include "System/Runtime/InteropServices/ComTypes/TYPEDESC.h"
#include "System/Runtime/InteropServices/ComTypes/ELEMDESC.h"
#include "System/Runtime/InteropServices/ComTypes/VARKIND.h"
#include "System/Runtime/InteropServices/ComTypes/VARDESC.h"
#include "System/Runtime/InteropServices/ComTypes/DISPPARAMS.h"
#include "System/Runtime/InteropServices/ComTypes/EXCEPINFO.h"
#include "System/Runtime/InteropServices/ComTypes/FUNCKIND.h"
#include "System/Runtime/InteropServices/ComTypes/INVOKEKIND.h"
#include "System/Runtime/InteropServices/ComTypes/CALLCONV.h"
#include "System/Runtime/InteropServices/ComTypes/FUNCFLAGS.h"
#include "System/Runtime/InteropServices/ComTypes/VARFLAGS.h"
#include "System/Runtime/InteropServices/ComTypes/ITypeInfo.h"
#include "System/Runtime/InteropServices/ComTypes/SYSKIND.h"
#include "System/Runtime/InteropServices/ComTypes/LIBFLAGS.h"
#include "System/Runtime/InteropServices/ComTypes/TYPELIBATTR.h"
#include "System/Runtime/InteropServices/ComTypes/ITypeLib.h"
#include "System/Runtime/InteropServices/ComTypes/ITypeLib2.h"
#include "System/Runtime/InteropServices/ComTypes/ITypeInfo2.h"
#include "System/Runtime/InteropServices/Expando/IExpando.h"
#include "System/IO/Stream.h"
#include "System/IO/BinaryReader.h"
#include "System/IO/BinaryWriter.h"
#include "System/IO/BufferedStream.h"
#include "System/IO/Directory.h"
#include "System/IO/FileSystemInfo.h"
#include "System/IO/DirectoryInfo.h"
#include "System/IO/SearchOption.h"
#include "System/IO/IOException.h"
#include "System/IO/DirectoryNotFoundException.h"
#include "System/IO/DriveType.h"
#include "System/IO/DriveInfo.h"
#include "System/IO/DriveNotFoundException.h"
#include "System/IO/EndOfStreamException.h"
#include "System/IO/File.h"
#include "System/IO/FileAccess.h"
#include "System/IO/FileInfo.h"
#include "System/IO/FileLoadException.h"
#include "System/IO/FileMode.h"
#include "System/IO/FileNotFoundException.h"
#include "System/IO/FileOptions.h"
#include "System/IO/FileShare.h"
#include "System/IO/FileStream.h"
#include "System/IO/FileAttributes.h"
#include "System/IO/MemoryStream.h"
#include "System/IO/Path.h"
#include "System/IO/PathTooLongException.h"
#include "System/IO/UnmanagedMemoryStream.h"
#include "System/IO/SeekOrigin.h"
#include "System/IO/TextReader.h"
#include "System/IO/StreamReader.h"
#include "System/IO/TextWriter.h"
#include "System/IO/StreamWriter.h"
#include "System/IO/StringReader.h"
#include "System/IO/StringWriter.h"
#include "System/Runtime/CompilerServices/AccessedThroughPropertyAttribute.h"
#include "System/Runtime/CompilerServices/CallConvCdecl.h"
#include "System/Runtime/CompilerServices/CallConvStdcall.h"
#include "System/Runtime/CompilerServices/CallConvThiscall.h"
#include "System/Runtime/CompilerServices/CallConvFastcall.h"
#include "System/Runtime/CompilerServices/RuntimeHelpers.h"
#include "System/Runtime/CompilerServices/CompilerGeneratedAttribute.h"
#include "System/Runtime/CompilerServices/CustomConstantAttribute.h"
#include "System/Runtime/CompilerServices/DateTimeConstantAttribute.h"
#include "System/Runtime/CompilerServices/DiscardableAttribute.h"
#include "System/Runtime/CompilerServices/DecimalConstantAttribute.h"
#include "System/Runtime/CompilerServices/CompilationRelaxations.h"
#include "System/Runtime/CompilerServices/CompilationRelaxationsAttribute.h"
#include "System/Runtime/CompilerServices/CompilerGlobalScopeAttribute.h"
#include "System/Runtime/CompilerServices/FixedBufferAttribute.h"
#include "System/Runtime/CompilerServices/IndexerNameAttribute.h"
#include "System/Runtime/CompilerServices/InternalsVisibleToAttribute.h"
#include "System/Runtime/CompilerServices/IsVolatile.h"
#include "System/Runtime/CompilerServices/MethodImplOptions.h"
#include "System/Runtime/CompilerServices/MethodCodeType.h"
#include "System/Runtime/CompilerServices/MethodImplAttribute.h"
#include "System/Runtime/CompilerServices/FixedAddressValueTypeAttribute.h"
#include "System/Runtime/CompilerServices/UnsafeValueTypeAttribute.h"
#include "System/Runtime/CompilerServices/RequiredAttributeAttribute.h"
#include "System/Runtime/CompilerServices/LoadHint.h"
#include "System/Runtime/CompilerServices/DefaultDependencyAttribute.h"
#include "System/Runtime/CompilerServices/DependencyAttribute.h"
#include "System/Runtime/CompilerServices/CompilerMarshalOverride.h"
#include "System/Runtime/CompilerServices/HasCopySemanticsAttribute.h"
#include "System/Runtime/CompilerServices/IsBoxed.h"
#include "System/Runtime/CompilerServices/IsByValue.h"
#include "System/Runtime/CompilerServices/IsConst.h"
#include "System/Runtime/CompilerServices/IsExplicitlyDereferenced.h"
#include "System/Runtime/CompilerServices/IsImplicitlyDereferenced.h"
#include "System/Runtime/CompilerServices/IsJitIntrinsic.h"
#include "System/Runtime/CompilerServices/IsLong.h"
#include "System/Runtime/CompilerServices/IsPinned.h"
#include "System/Runtime/CompilerServices/IsSignUnspecifiedByte.h"
#include "System/Runtime/CompilerServices/IsUdtReturn.h"
#include "System/Runtime/CompilerServices/ScopelessEnumAttribute.h"
#include "System/Runtime/CompilerServices/SpecialNameAttribute.h"
#include "System/Runtime/CompilerServices/IsCopyConstructed.h"
#include "System/Runtime/CompilerServices/SuppressIldasmAttribute.h"
#include "System/Runtime/CompilerServices/NativeCppClassAttribute.h"
#include "System/Runtime/CompilerServices/TypeForwardedToAttribute.h"
#include "System/Runtime/CompilerServices/RuntimeCompatibilityAttribute.h"
#include "System/Runtime/CompilerServices/RuntimeWrappedException.h"
#include "System/Runtime/CompilerServices/IDispatchConstantAttribute.h"
#include "System/Runtime/CompilerServices/IUnknownConstantAttribute.h"
#include "System/Runtime/MemoryFailPoint.h"
#include "System/Runtime/GCLatencyMode.h"
#include "System/Runtime/GCSettings.h"
#include "System/Security/SecurityElement.h"
#include "System/Security/XmlSyntaxException.h"
#include "System/Security/Permissions/EnvironmentPermissionAccess.h"
#include "System/Security/IPermission.h"
#include "System/Security/IStackWalk.h"
#include "System/Security/CodeAccessPermission.h"
#include "System/Security/Permissions/IUnrestrictedPermission.h"
#include "System/Security/Permissions/EnvironmentPermission.h"
#include "System/Security/Permissions/FileDialogPermissionAccess.h"
#include "System/Security/Permissions/FileDialogPermission.h"
#include "System/Security/Permissions/FileIOPermissionAccess.h"
#include "System/Security/Permissions/FileIOPermission.h"
#include "System/Security/Permissions/HostProtectionResource.h"
#include "System/Security/Permissions/SecurityAttribute.h"
#include "System/Security/Permissions/CodeAccessSecurityAttribute.h"
#include "System/Security/Permissions/HostProtectionAttribute.h"
#include "System/Security/Permissions/IsolatedStorageContainment.h"
#include "System/Security/Permissions/IsolatedStoragePermission.h"
#include "System/Security/Permissions/IsolatedStorageFilePermission.h"
#include "System/Security/Permissions/PermissionState.h"
#include "System/Security/Permissions/SecurityAction.h"
#include "System/Security/Permissions/EnvironmentPermissionAttribute.h"
#include "System/Security/Permissions/FileDialogPermissionAttribute.h"
#include "System/Security/Permissions/FileIOPermissionAttribute.h"
#include "System/Security/Permissions/KeyContainerPermissionAttribute.h"
#include "System/Security/Permissions/PrincipalPermissionAttribute.h"
#include "System/Security/Permissions/ReflectionPermissionAttribute.h"
#include "System/Security/Permissions/RegistryPermissionAttribute.h"
#include "System/Security/Permissions/SecurityPermissionAttribute.h"
#include "System/Security/Permissions/UIPermissionAttribute.h"
#include "System/Security/Permissions/ZoneIdentityPermissionAttribute.h"
#include "System/Security/Permissions/StrongNameIdentityPermissionAttribute.h"
#include "System/Security/Permissions/SiteIdentityPermissionAttribute.h"
#include "System/Security/Permissions/UrlIdentityPermissionAttribute.h"
#include "System/Security/Permissions/PublisherIdentityPermissionAttribute.h"
#include "System/Security/Permissions/IsolatedStoragePermissionAttribute.h"
#include "System/Security/Permissions/IsolatedStorageFilePermissionAttribute.h"
#include "System/Security/Permissions/PermissionSetAttribute.h"
#include "System/Security/Permissions/ReflectionPermissionFlag.h"
#include "System/Security/Permissions/ReflectionPermission.h"
#include "System/Security/Permissions/PrincipalPermission.h"
#include "System/Security/Permissions/SecurityPermissionFlag.h"
#include "System/Security/Permissions/SecurityPermission.h"
#include "System/Security/Permissions/SiteIdentityPermission.h"
#include "System/Security/Permissions/StrongNameIdentityPermission.h"
#include "System/Security/Permissions/StrongNamePublicKeyBlob.h"
#include "System/Security/Permissions/UIPermissionWindow.h"
#include "System/Security/Permissions/UIPermissionClipboard.h"
#include "System/Security/Permissions/UIPermission.h"
#include "System/Security/Permissions/UrlIdentityPermission.h"
#include "System/Security/Permissions/ZoneIdentityPermission.h"
#include "System/Security/Permissions/GacIdentityPermissionAttribute.h"
#include "System/Security/Permissions/GacIdentityPermission.h"
#include "System/Security/Permissions/KeyContainerPermissionFlags.h"
#include "System/Security/Permissions/KeyContainerPermissionAccessEntry.h"
#include "System/Security/Permissions/KeyContainerPermissionAccessEntryCollection.h"
#include "System/Security/Permissions/KeyContainerPermissionAccessEntryEnumerator.h"
#include "System/Security/Permissions/KeyContainerPermission.h"
#include "System/Security/Permissions/PublisherIdentityPermission.h"
#include "System/Security/Permissions/RegistryPermissionAccess.h"
#include "System/Security/Permissions/RegistryPermission.h"
#include "System/Security/SuppressUnmanagedCodeSecurityAttribute.h"
#include "System/Security/UnverifiableCodeAttribute.h"
#include "System/Security/AllowPartiallyTrustedCallersAttribute.h"
#include "System/Security/SecurityCriticalScope.h"
#include "System/Security/SecurityCriticalAttribute.h"
#include "System/Security/SecurityTreatAsSafeAttribute.h"
#include "System/Security/SecuritySafeCriticalAttribute.h"
#include "System/Security/SecurityTransparentAttribute.h"
#include "System/Security/HostSecurityManagerOptions.h"
#include "System/Security/HostSecurityManager.h"
#include "System/Security/PermissionSet.h"
#include "System/Security/NamedPermissionSet.h"
#include "System/Security/SecureString.h"
#include "System/Security/SecurityContext.h"
#include "System/Security/SecurityException.h"
#include "System/Security/HostProtectionException.h"
#include "System/Security/PolicyLevelType.h"
#include "System/Security/SecurityManager.h"
#include "System/Security/SecurityState.h"
#include "System/Security/SecurityZone.h"
#include "System/Security/VerificationException.h"
#include "System/Runtime/Remoting/Contexts/IContextAttribute.h"
#include "System/Runtime/Remoting/Contexts/IContextProperty.h"
#include "System/Runtime/Remoting/Contexts/ContextAttribute.h"
#include "System/Runtime/Remoting/Activation/IActivator.h"
#include "System/Runtime/Remoting/Messaging/IMessageSink.h"
#include "System/Runtime/Remoting/Messaging/AsyncResult.h"
#include "System/Runtime/Remoting/Messaging/CallContext.h"
#include "System/Runtime/Remoting/Messaging/ILogicalThreadAffinative.h"
#include "System/Runtime/Remoting/Messaging/LogicalCallContext.h"
#include "System/Runtime/Remoting/Channels/ChannelServices.h"
#include "System/Runtime/Remoting/Channels/IClientResponseChannelSinkStack.h"
#include "System/Runtime/Remoting/Channels/IClientChannelSinkStack.h"
#include "System/Runtime/Remoting/Channels/ClientChannelSinkStack.h"
#include "System/Runtime/Remoting/Channels/IServerResponseChannelSinkStack.h"
#include "System/Runtime/Remoting/Channels/IServerChannelSinkStack.h"
#include "System/Runtime/Remoting/Channels/ServerChannelSinkStack.h"
#include "System/Runtime/Remoting/Lifetime/ISponsor.h"
#include "System/Runtime/Remoting/Lifetime/ClientSponsor.h"
#include "System/Runtime/Remoting/WellKnownObjectMode.h"
#include "System/Runtime/Remoting/Contexts/CrossContextDelegate.h"
#include "System/Runtime/Remoting/Contexts/Context.h"
#include "System/Runtime/Remoting/Contexts/ContextProperty.h"
#include "System/Runtime/Remoting/Contexts/IContextPropertyActivator.h"
#include "System/Runtime/Remoting/Channels/IChannel.h"
#include "System/Runtime/Remoting/Channels/IChannelSender.h"
#include "System/Runtime/Remoting/Channels/IChannelReceiver.h"
#include "System/Runtime/Remoting/Channels/IServerChannelSinkProvider.h"
#include "System/Runtime/Remoting/Channels/IChannelSinkBase.h"
#include "System/Runtime/Remoting/Channels/IServerChannelSink.h"
#include "System/Runtime/Remoting/Services/EnterpriseServicesHelper.h"
#include "System/Runtime/Remoting/Messaging/Header.h"
#include "System/Runtime/Remoting/Messaging/HeaderHandler.h"
#include "System/Runtime/Remoting/Activation/ActivatorLevel.h"
#include "System/Runtime/Remoting/Messaging/IMessage.h"
#include "System/Runtime/Remoting/Messaging/IMethodMessage.h"
#include "System/Runtime/Remoting/Messaging/IMethodCallMessage.h"
#include "System/Runtime/Remoting/Activation/IConstructionCallMessage.h"
#include "System/Runtime/Remoting/Messaging/IMethodReturnMessage.h"
#include "System/Runtime/Remoting/Activation/IConstructionReturnMessage.h"
#include "System/Runtime/Remoting/Channels/IChannelReceiverHook.h"
#include "System/Runtime/Remoting/Channels/IClientChannelSinkProvider.h"
#include "System/Runtime/Remoting/Channels/IClientFormatterSinkProvider.h"
#include "System/Runtime/Remoting/Channels/IServerFormatterSinkProvider.h"
#include "System/Runtime/Remoting/Channels/IClientChannelSink.h"
#include "System/Runtime/Remoting/Channels/ServerProcessing.h"
#include "System/Runtime/Remoting/Channels/IClientFormatterSink.h"
#include "System/Runtime/Remoting/Channels/IChannelDataStore.h"
#include "System/Runtime/Remoting/Channels/ChannelDataStore.h"
#include "System/Runtime/Remoting/Channels/ITransportHeaders.h"
#include "System/Runtime/Remoting/Channels/TransportHeaders.h"
#include "System/Runtime/Remoting/Channels/SinkProviderData.h"
#include "System/Runtime/Remoting/Channels/BaseChannelObjectWithProperties.h"
#include "System/Runtime/Remoting/Channels/BaseChannelSinkWithProperties.h"
#include "System/Runtime/Remoting/Channels/BaseChannelWithProperties.h"
#include "System/Runtime/Remoting/Contexts/IContributeClientContextSink.h"
#include "System/Runtime/Remoting/Contexts/IContributeDynamicSink.h"
#include "System/Runtime/Remoting/Contexts/IContributeEnvoySink.h"
#include "System/Runtime/Remoting/Contexts/IContributeObjectSink.h"
#include "System/Runtime/Remoting/Contexts/IContributeServerContextSink.h"
#include "System/Runtime/Remoting/Contexts/IDynamicProperty.h"
#include "System/Runtime/Remoting/Contexts/IDynamicMessageSink.h"
#include "System/Runtime/Remoting/Lifetime/ILease.h"
#include "System/Runtime/Remoting/Messaging/IMessageCtrl.h"
#include "System/Runtime/Remoting/Messaging/IRemotingFormatter.h"
#include "System/Runtime/Remoting/Channels/ISecurableChannel.h"
#include "System/Runtime/Remoting/Lifetime/LeaseState.h"
#include "System/Runtime/Remoting/Lifetime/LifetimeServices.h"
#include "System/Runtime/Remoting/Messaging/ReturnMessage.h"
#include "System/Runtime/Remoting/Messaging/MethodCall.h"
#include "System/Runtime/Remoting/Messaging/ConstructionCall.h"
#include "System/Runtime/Remoting/Messaging/MethodResponse.h"
#include "System/Runtime/Serialization/Formatters/IFieldInfo.h"
#include "System/Runtime/Remoting/Messaging/ConstructionResponse.h"
#include "System/Runtime/Remoting/Messaging/InternalMessageWrapper.h"
#include "System/Runtime/Remoting/Messaging/MethodCallMessageWrapper.h"
#include "System/Runtime/Remoting/Messaging/MethodReturnMessageWrapper.h"
#include "System/Runtime/Remoting/ObjectHandle.h"
#include "System/Runtime/Remoting/IRemotingTypeInfo.h"
#include "System/Runtime/Remoting/IChannelInfo.h"
#include "System/Runtime/Remoting/IEnvoyInfo.h"
#include "System/Runtime/Remoting/ObjRef.h"
#include "System/Runtime/Remoting/Messaging/OneWayAttribute.h"
#include "System/Runtime/Remoting/Proxies/ProxyAttribute.h"
#include "System/Runtime/Remoting/Proxies/RealProxy.h"
#include "System/Runtime/Remoting/Metadata/SoapOption.h"
#include "System/Runtime/Remoting/Metadata/XmlFieldOrderOption.h"
#include "System/Runtime/Remoting/Metadata/SoapAttribute.h"
#include "System/Runtime/Remoting/Metadata/SoapTypeAttribute.h"
#include "System/Runtime/Remoting/Metadata/SoapMethodAttribute.h"
#include "System/Runtime/Remoting/Metadata/SoapFieldAttribute.h"
#include "System/Runtime/Remoting/Metadata/SoapParameterAttribute.h"
#include "System/Runtime/Remoting/RemotingConfiguration.h"
#include "System/Runtime/Remoting/TypeEntry.h"
#include "System/Runtime/Remoting/ActivatedClientTypeEntry.h"
#include "System/Runtime/Remoting/ActivatedServiceTypeEntry.h"
#include "System/Runtime/Remoting/WellKnownClientTypeEntry.h"
#include "System/Runtime/Remoting/WellKnownServiceTypeEntry.h"
#include "System/Runtime/Remoting/CustomErrorsModes.h"
#include "System/Runtime/Remoting/RemotingException.h"
#include "System/Runtime/Remoting/ServerException.h"
#include "System/Runtime/Remoting/RemotingTimeoutException.h"
#include "System/Runtime/Remoting/RemotingServices.h"
#include "System/Runtime/Remoting/InternalRemotingServices.h"
#include "System/Runtime/Remoting/Messaging/MessageSurrogateFilter.h"
#include "System/Runtime/Remoting/Messaging/RemotingSurrogateSelector.h"
#include "System/Runtime/Remoting/SoapServices.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/ISoapXsd.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapDateTime.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapDuration.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapTime.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapDate.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapYearMonth.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapYear.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapMonthDay.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapDay.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapMonth.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapHexBinary.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapBase64Binary.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapInteger.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapPositiveInteger.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapNonPositiveInteger.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapNonNegativeInteger.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapNegativeInteger.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapAnyUri.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapQName.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapNotation.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapNormalizedString.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapToken.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapLanguage.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapName.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapIdrefs.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapEntities.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapNmtoken.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapNmtokens.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapNcName.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapId.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapIdref.h"
#include "System/Runtime/Remoting/Metadata/W3cXsd2001/SoapEntity.h"
#include "System/Runtime/Remoting/Contexts/SynchronizationAttribute.h"
#include "System/Runtime/Remoting/Services/ITrackingHandler.h"
#include "System/Runtime/Remoting/Services/TrackingServices.h"
#include "System/Runtime/Remoting/Activation/UrlAttribute.h"
#include "System/IO/IsolatedStorage/IsolatedStorageScope.h"
#include "System/IO/IsolatedStorage/IsolatedStorage.h"
#include "System/IO/IsolatedStorage/IsolatedStorageFile.h"
#include "System/IO/IsolatedStorage/IsolatedStorageFileStream.h"
#include "System/IO/IsolatedStorage/IsolatedStorageException.h"
#include "System/IO/IsolatedStorage/INormalizeForIsolatedStorage.h"
#include "System/Runtime/Serialization/Formatters/FormatterTypeStyle.h"
#include "System/Runtime/Serialization/Formatters/FormatterAssemblyStyle.h"
#include "System/Runtime/Serialization/Formatters/TypeFilterLevel.h"
#include "System/Runtime/Serialization/Formatters/ISoapMessage.h"
#include "System/Runtime/Serialization/Formatters/InternalRM.h"
#include "System/Runtime/Serialization/Formatters/InternalST.h"
#include "System/Runtime/Serialization/Formatters/SoapMessage.h"
#include "System/Runtime/Serialization/Formatters/SoapFault.h"
#include "System/Runtime/Serialization/Formatters/ServerFault.h"
#include "System/Runtime/Serialization/Formatters/Binary/BinaryFormatter.h"
#include "System/Runtime/InteropServices/_AssemblyBuilder.h"
#include "System/Reflection/Emit/AssemblyBuilder.h"
#include "System/Reflection/Emit/AssemblyBuilderAccess.h"
#include "System/Runtime/InteropServices/_ConstructorBuilder.h"
#include "System/Runtime/InteropServices/_CustomAttributeBuilder.h"
#include "System/Runtime/InteropServices/_EnumBuilder.h"
#include "System/Runtime/InteropServices/_EventBuilder.h"
#include "System/Runtime/InteropServices/_FieldBuilder.h"
#include "System/Runtime/InteropServices/_ILGenerator.h"
#include "System/Runtime/InteropServices/_LocalBuilder.h"
#include "System/Runtime/InteropServices/_MethodBuilder.h"
#include "System/Runtime/InteropServices/_MethodRental.h"
#include "System/Runtime/InteropServices/_ModuleBuilder.h"
#include "System/Runtime/InteropServices/_ParameterBuilder.h"
#include "System/Runtime/InteropServices/_PropertyBuilder.h"
#include "System/Runtime/InteropServices/_SignatureHelper.h"
#include "System/Runtime/InteropServices/_TypeBuilder.h"
#include "System/Reflection/Emit/ConstructorBuilder.h"
#include "System/Reflection/Emit/ILGenerator.h"
#include "System/Reflection/Emit/DynamicILInfo.h"
#include "System/Reflection/Emit/DynamicMethod.h"
#include "System/Reflection/Emit/EventBuilder.h"
#include "System/Reflection/Emit/EventToken.h"
#include "System/Reflection/Emit/FieldBuilder.h"
#include "System/Reflection/Emit/FieldToken.h"
#include "System/Reflection/Emit/Label.h"
#include "System/Reflection/Emit/LocalBuilder.h"
#include "System/Reflection/Emit/MethodBuilder.h"
#include "System/Reflection/Emit/CustomAttributeBuilder.h"
#include "System/Reflection/Emit/MethodRental.h"
#include "System/Reflection/Emit/MethodToken.h"
#include "System/Reflection/Emit/ModuleBuilder.h"
#include "System/Reflection/Emit/PEFileKinds.h"
#include "System/Reflection/Emit/OpCodes.h"
#include "System/Reflection/Emit/OpCode.h"
#include "System/Reflection/Emit/OpCodeType.h"
#include "System/Reflection/Emit/StackBehaviour.h"
#include "System/Reflection/Emit/OperandType.h"
#include "System/Reflection/Emit/FlowControl.h"
#include "System/Reflection/Emit/ParameterBuilder.h"
#include "System/Reflection/Emit/ParameterToken.h"
#include "System/Reflection/Emit/PropertyBuilder.h"
#include "System/Reflection/Emit/PropertyToken.h"
#include "System/Reflection/Emit/SignatureHelper.h"
#include "System/Reflection/Emit/SignatureToken.h"
#include "System/Reflection/Emit/StringToken.h"
#include "System/Reflection/Emit/PackingSize.h"
#include "System/Reflection/Emit/TypeBuilder.h"
#include "System/Reflection/Emit/GenericTypeParameterBuilder.h"
#include "System/Reflection/Emit/EnumBuilder.h"
#include "System/Reflection/Emit/TypeToken.h"
#include "System/Reflection/Emit/UnmanagedMarshal.h"
#include "System/Configuration/Assemblies/AssemblyHash.h"
#include "System/Configuration/Assemblies/AssemblyHashAlgorithm.h"
#include "System/Configuration/Assemblies/AssemblyVersionCompatibility.h"
#include "System/Security/Cryptography/CipherMode.h"
#include "System/Security/Cryptography/PaddingMode.h"
#include "System/Security/Cryptography/KeySizes.h"
#include "System/Security/Cryptography/CryptographicException.h"
#include "System/Security/Cryptography/CryptographicUnexpectedOperationException.h"
#include "System/Security/Cryptography/ICryptoTransform.h"
#include "System/Security/Cryptography/RandomNumberGenerator.h"
#include "System/Security/Cryptography/RNGCryptoServiceProvider.h"
#include "System/Security/Cryptography/AsymmetricAlgorithm.h"
#include "System/Security/Cryptography/AsymmetricKeyExchangeDeformatter.h"
#include "System/Security/Cryptography/AsymmetricKeyExchangeFormatter.h"
#include "System/Security/Cryptography/AsymmetricSignatureDeformatter.h"
#include "System/Security/Cryptography/AsymmetricSignatureFormatter.h"
#include "System/Security/Cryptography/FromBase64TransformMode.h"
#include "System/Security/Cryptography/ToBase64Transform.h"
#include "System/Security/Cryptography/FromBase64Transform.h"
#include "System/Security/Cryptography/CryptoAPITransform.h"
#include "System/Security/Cryptography/CspProviderFlags.h"
#include "System/Security/Cryptography/CspParameters.h"
#include "System/Security/Cryptography/CryptoConfig.h"
#include "System/Security/Cryptography/CryptoStreamMode.h"
#include "System/Security/Cryptography/CryptoStream.h"
#include "System/Security/Cryptography/SymmetricAlgorithm.h"
#include "System/Security/Cryptography/DES.h"
#include "System/Security/Cryptography/DESCryptoServiceProvider.h"
#include "System/Security/Cryptography/DeriveBytes.h"
#include "System/Security/Cryptography/DSAParameters.h"
#include "System/Security/Cryptography/DSA.h"
#include "System/Security/Cryptography/ICspAsymmetricAlgorithm.h"
#include "System/Security/Cryptography/DSACryptoServiceProvider.h"
#include "System/Security/Cryptography/DSASignatureDeformatter.h"
#include "System/Security/Cryptography/DSASignatureFormatter.h"
#include "System/Security/Cryptography/HashAlgorithm.h"
#include "System/Security/Cryptography/KeyedHashAlgorithm.h"
#include "System/Security/Cryptography/HMAC.h"
#include "System/Security/Cryptography/HMACMD5.h"
#include "System/Security/Cryptography/HMACRIPEMD160.h"
#include "System/Security/Cryptography/HMACSHA1.h"
#include "System/Security/Cryptography/HMACSHA256.h"
#include "System/Security/Cryptography/HMACSHA384.h"
#include "System/Security/Cryptography/HMACSHA512.h"
#include "System/Security/Cryptography/KeyNumber.h"
#include "System/Security/Cryptography/CspKeyContainerInfo.h"
#include "System/Security/Cryptography/MACTripleDES.h"
#include "System/Security/Cryptography/MD5.h"
#include "System/Security/Cryptography/MD5CryptoServiceProvider.h"
#include "System/Security/Cryptography/MaskGenerationMethod.h"
#include "System/Security/Cryptography/PasswordDeriveBytes.h"
#include "System/Security/Cryptography/PKCS1MaskGenerationMethod.h"
#include "System/Security/Cryptography/RC2.h"
#include "System/Security/Cryptography/RC2CryptoServiceProvider.h"
#include "System/Security/Cryptography/Rfc2898DeriveBytes.h"
#include "System/Security/Cryptography/RIPEMD160.h"
#include "System/Security/Cryptography/RIPEMD160Managed.h"
#include "System/Security/Cryptography/RSAParameters.h"
#include "System/Security/Cryptography/RSA.h"
#include "System/Security/Cryptography/RSACryptoServiceProvider.h"
#include "System/Security/Cryptography/RSAOAEPKeyExchangeDeformatter.h"
#include "System/Security/Cryptography/RSAOAEPKeyExchangeFormatter.h"
#include "System/Security/Cryptography/RSAPKCS1KeyExchangeDeformatter.h"
#include "System/Security/Cryptography/RSAPKCS1KeyExchangeFormatter.h"
#include "System/Security/Cryptography/RSAPKCS1SignatureDeformatter.h"
#include "System/Security/Cryptography/RSAPKCS1SignatureFormatter.h"
#include "System/Security/Cryptography/Rijndael.h"
#include "System/Security/Cryptography/RijndaelManaged.h"
#include "System/Security/Cryptography/RijndaelManagedTransform.h"
#include "System/Security/Cryptography/SHA1.h"
#include "System/Security/Cryptography/SHA1CryptoServiceProvider.h"
#include "System/Security/Cryptography/SHA1Managed.h"
#include "System/Security/Cryptography/SHA256.h"
#include "System/Security/Cryptography/SHA256Managed.h"
#include "System/Security/Cryptography/SHA384.h"
#include "System/Security/Cryptography/SHA384Managed.h"
#include "System/Security/Cryptography/SHA512.h"
#include "System/Security/Cryptography/SHA512Managed.h"
#include "System/Security/Cryptography/SignatureDescription.h"
#include "System/Security/Cryptography/TripleDES.h"
#include "System/Security/Cryptography/TripleDESCryptoServiceProvider.h"
#include "System/Security/Cryptography/X509Certificates/X509ContentType.h"
#include "System/Security/Cryptography/X509Certificates/X509KeyStorageFlags.h"
#include "System/Security/Cryptography/X509Certificates/X509Certificate.h"
#include "System/Security/AccessControl/AceType.h"
#include "System/Security/AccessControl/AceFlags.h"
#include "System/Security/AccessControl/GenericAce.h"
#include "System/Security/AccessControl/KnownAce.h"
#include "System/Security/AccessControl/CustomAce.h"
#include "System/Security/AccessControl/CompoundAceType.h"
#include "System/Security/AccessControl/CompoundAce.h"
#include "System/Security/AccessControl/AceQualifier.h"
#include "System/Security/AccessControl/QualifiedAce.h"
#include "System/Security/AccessControl/CommonAce.h"
#include "System/Security/AccessControl/ObjectAceFlags.h"
#include "System/Security/AccessControl/ObjectAce.h"
#include "System/Security/AccessControl/AceEnumerator.h"
#include "System/Security/AccessControl/GenericAcl.h"
#include "System/Security/AccessControl/RawAcl.h"
#include "System/Security/AccessControl/CommonAcl.h"
#include "System/Security/AccessControl/SystemAcl.h"
#include "System/Security/AccessControl/DiscretionaryAcl.h"
#include "System/Security/AccessControl/CryptoKeyRights.h"
#include "System/Security/AccessControl/AuthorizationRule.h"
#include "System/Security/AccessControl/AccessRule.h"
#include "System/Security/AccessControl/CryptoKeyAccessRule.h"
#include "System/Security/AccessControl/AuditRule.h"
#include "System/Security/AccessControl/CryptoKeyAuditRule.h"
#include "System/Security/AccessControl/ObjectSecurity.h"
#include "System/Security/AccessControl/CommonObjectSecurity.h"
#include "System/Security/AccessControl/NativeObjectSecurity.h"
#include "System/Security/AccessControl/CryptoKeySecurity.h"
#include "System/Security/AccessControl/InheritanceFlags.h"
#include "System/Security/AccessControl/PropagationFlags.h"
#include "System/Security/AccessControl/AuditFlags.h"
#include "System/Security/AccessControl/SecurityInfos.h"
#include "System/Security/AccessControl/ResourceType.h"
#include "System/Security/AccessControl/AccessControlSections.h"
#include "System/Security/AccessControl/AccessControlActions.h"
#include "System/Security/AccessControl/EventWaitHandleRights.h"
#include "System/Security/AccessControl/EventWaitHandleAccessRule.h"
#include "System/Security/AccessControl/EventWaitHandleAuditRule.h"
#include "System/Security/AccessControl/EventWaitHandleSecurity.h"
#include "System/Security/AccessControl/FileSystemRights.h"
#include "System/Security/AccessControl/FileSystemAccessRule.h"
#include "System/Security/AccessControl/FileSystemAuditRule.h"
#include "System/Security/AccessControl/FileSystemSecurity.h"
#include "System/Security/AccessControl/FileSecurity.h"
#include "System/Security/AccessControl/DirectorySecurity.h"
#include "System/Security/AccessControl/MutexRights.h"
#include "System/Security/AccessControl/MutexAccessRule.h"
#include "System/Security/AccessControl/MutexAuditRule.h"
#include "System/Security/AccessControl/MutexSecurity.h"
#include "System/Security/AccessControl/AccessControlModification.h"
#include "System/Security/AccessControl/DirectoryObjectSecurity.h"
#include "System/Security/AccessControl/PrivilegeNotHeldException.h"
#include "System/Security/AccessControl/RegistryRights.h"
#include "System/Security/AccessControl/RegistryAccessRule.h"
#include "System/Security/AccessControl/RegistryAuditRule.h"
#include "System/Security/AccessControl/RegistrySecurity.h"
#include "System/Security/AccessControl/AccessControlType.h"
#include "System/Security/AccessControl/ObjectAccessRule.h"
#include "System/Security/AccessControl/ObjectAuditRule.h"
#include "System/Security/AccessControl/AuthorizationRuleCollection.h"
#include "System/Security/AccessControl/ControlFlags.h"
#include "System/Security/AccessControl/GenericSecurityDescriptor.h"
#include "System/Security/AccessControl/RawSecurityDescriptor.h"
#include "System/Security/AccessControl/CommonSecurityDescriptor.h"
#include "System/Security/Principal/IdentityReference.h"
#include "System/Security/Principal/IdentityReferenceCollection.h"
#include "System/Security/Principal/NTAccount.h"
#include "System/Security/Principal/WellKnownSidType.h"
#include "System/Security/Principal/SecurityIdentifier.h"
#include "System/Security/Principal/IdentityNotMappedException.h"
#include "System/Runtime/Versioning/ResourceConsumptionAttribute.h"
#include "System/Runtime/Versioning/ResourceExposureAttribute.h"
#include "System/Runtime/Versioning/ResourceScope.h"
#include "System/Runtime/Versioning/VersioningHelper.h"


void Initialize(_AssemblyPtr _assemblyPtr)
{
    System::Object::_Object = pFind_Type(_assemblyPtr, "System.Object");
    System::ICloneable::_ICloneable = pFind_Type(_assemblyPtr, "System.ICloneable");
    System::Collections::IEnumerable::_IEnumerable = pFind_Type(_assemblyPtr, "System.Collections.IEnumerable");
    System::Collections::ICollection::_ICollection = pFind_Type(_assemblyPtr, "System.Collections.ICollection");
    System::Collections::IList::_IList = pFind_Type(_assemblyPtr, "System.Collections.IList");
    System::Array::_Array = pFind_Type(_assemblyPtr, "System.Array");
    System::ValueType::_ValueType = pFind_Type(_assemblyPtr, "System.ValueType");
    System::Collections::IEnumerator::_IEnumerator = pFind_Type(_assemblyPtr, "System.Collections.IEnumerator");
    System::IDisposable::_IDisposable = pFind_Type(_assemblyPtr, "System.IDisposable");
    System::IComparable::_IComparable = pFind_Type(_assemblyPtr, "System.IComparable");
    System::IFormattable::_IFormattable = pFind_Type(_assemblyPtr, "System.IFormattable");
    System::IConvertible::_IConvertible = pFind_Type(_assemblyPtr, "System.IConvertible");
    System::Enum::_Enum = pFind_Type(_assemblyPtr, "System.Enum");
    System::String::_String = pFind_Type(_assemblyPtr, "System.String");
    System::StringSplitOptions::_StringSplitOptions = pFind_Type(_assemblyPtr, "System.StringSplitOptions");
    System::Collections::IComparer::_IComparer = pFind_Type(_assemblyPtr, "System.Collections.IComparer");
    System::Collections::IEqualityComparer::_IEqualityComparer = pFind_Type(_assemblyPtr, "System.Collections.IEqualityComparer");
    System::StringComparer::_StringComparer = pFind_Type(_assemblyPtr, "System.StringComparer");
    System::StringComparison::_StringComparison = pFind_Type(_assemblyPtr, "System.StringComparison");
    System::Runtime::Serialization::ISerializable::_ISerializable = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.ISerializable");
    System::Text::StringBuilder::_StringBuilder = pFind_Type(_assemblyPtr, "System.Text.StringBuilder");
    System::Runtime::InteropServices::_Exception::__Exception = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._Exception");
    System::Exception::_Exception = pFind_Type(_assemblyPtr, "System.Exception");
    System::DateTime::_DateTime = pFind_Type(_assemblyPtr, "System.DateTime");
    System::DateTimeKind::_DateTimeKind = pFind_Type(_assemblyPtr, "System.DateTimeKind");
    System::Runtime::Serialization::IDeserializationCallback::_IDeserializationCallback = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.IDeserializationCallback");
    System::DateTimeOffset::_DateTimeOffset = pFind_Type(_assemblyPtr, "System.DateTimeOffset");
    System::SystemException::_SystemException = pFind_Type(_assemblyPtr, "System.SystemException");
    System::OutOfMemoryException::_OutOfMemoryException = pFind_Type(_assemblyPtr, "System.OutOfMemoryException");
    System::StackOverflowException::_StackOverflowException = pFind_Type(_assemblyPtr, "System.StackOverflowException");
    System::DataMisalignedException::_DataMisalignedException = pFind_Type(_assemblyPtr, "System.DataMisalignedException");
    System::ExecutionEngineException::_ExecutionEngineException = pFind_Type(_assemblyPtr, "System.ExecutionEngineException");
    System::Delegate::_Delegate = pFind_Type(_assemblyPtr, "System.Delegate");
    System::MulticastDelegate::_MulticastDelegate = pFind_Type(_assemblyPtr, "System.MulticastDelegate");
    System::MemberAccessException::_MemberAccessException = pFind_Type(_assemblyPtr, "System.MemberAccessException");
    System::Runtime::InteropServices::_Activator::__Activator = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._Activator");
    System::Activator::_Activator = pFind_Type(_assemblyPtr, "System.Activator");
    System::AccessViolationException::_AccessViolationException = pFind_Type(_assemblyPtr, "System.AccessViolationException");
    System::Runtime::Hosting::ApplicationActivator::_ApplicationActivator = pFind_Type(_assemblyPtr, "System.Runtime.Hosting.ApplicationActivator");
    System::ApplicationException::_ApplicationException = pFind_Type(_assemblyPtr, "System.ApplicationException");
    System::EventArgs::_EventArgs = pFind_Type(_assemblyPtr, "System.EventArgs");
    System::ResolveEventArgs::_ResolveEventArgs = pFind_Type(_assemblyPtr, "System.ResolveEventArgs");
    System::AssemblyLoadEventArgs::_AssemblyLoadEventArgs = pFind_Type(_assemblyPtr, "System.AssemblyLoadEventArgs");
    System::ResolveEventHandler::_ResolveEventHandler = pFind_Type(_assemblyPtr, "System.ResolveEventHandler");
    System::AssemblyLoadEventHandler::_AssemblyLoadEventHandler = pFind_Type(_assemblyPtr, "System.AssemblyLoadEventHandler");
    System::AppDomainInitializer::_AppDomainInitializer = pFind_Type(_assemblyPtr, "System.AppDomainInitializer");
    System::MarshalByRefObject::_MarshalByRefObject = pFind_Type(_assemblyPtr, "System.MarshalByRefObject");
    System::_AppDomain::__AppDomain = pFind_Type(_assemblyPtr, "System._AppDomain");
    System::Security::IEvidenceFactory::_IEvidenceFactory = pFind_Type(_assemblyPtr, "System.Security.IEvidenceFactory");
    System::AppDomain::_AppDomain = pFind_Type(_assemblyPtr, "System.AppDomain");
    System::CrossAppDomainDelegate::_CrossAppDomainDelegate = pFind_Type(_assemblyPtr, "System.CrossAppDomainDelegate");
    System::AppDomainManagerInitializationOptions::_AppDomainManagerInitializationOptions = pFind_Type(_assemblyPtr, "System.AppDomainManagerInitializationOptions");
    System::AppDomainManager::_AppDomainManager = pFind_Type(_assemblyPtr, "System.AppDomainManager");
    System::IAppDomainSetup::_IAppDomainSetup = pFind_Type(_assemblyPtr, "System.IAppDomainSetup");
    System::AppDomainSetup::_AppDomainSetup = pFind_Type(_assemblyPtr, "System.AppDomainSetup");
    System::LoaderOptimization::_LoaderOptimization = pFind_Type(_assemblyPtr, "System.LoaderOptimization");
    System::Runtime::InteropServices::_Attribute::__Attribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._Attribute");
    System::Attribute::_Attribute = pFind_Type(_assemblyPtr, "System.Attribute");
    System::LoaderOptimizationAttribute::_LoaderOptimizationAttribute = pFind_Type(_assemblyPtr, "System.LoaderOptimizationAttribute");
    System::AppDomainUnloadedException::_AppDomainUnloadedException = pFind_Type(_assemblyPtr, "System.AppDomainUnloadedException");
    System::Runtime::Hosting::ActivationArguments::_ActivationArguments = pFind_Type(_assemblyPtr, "System.Runtime.Hosting.ActivationArguments");
    System::ActivationContext::_ActivationContext = pFind_Type(_assemblyPtr, "System.ActivationContext");
    System::ApplicationIdentity::_ApplicationIdentity = pFind_Type(_assemblyPtr, "System.ApplicationIdentity");
    System::Deployment::Internal::InternalApplicationIdentityHelper::_InternalApplicationIdentityHelper = pFind_Type(_assemblyPtr, "System.Deployment.Internal.InternalApplicationIdentityHelper");
    System::Deployment::Internal::InternalActivationContextHelper::_InternalActivationContextHelper = pFind_Type(_assemblyPtr, "System.Deployment.Internal.InternalActivationContextHelper");
    System::ApplicationId::_ApplicationId = pFind_Type(_assemblyPtr, "System.ApplicationId");
    System::ArgumentException::_ArgumentException = pFind_Type(_assemblyPtr, "System.ArgumentException");
    System::ArgumentNullException::_ArgumentNullException = pFind_Type(_assemblyPtr, "System.ArgumentNullException");
    System::ArgumentOutOfRangeException::_ArgumentOutOfRangeException = pFind_Type(_assemblyPtr, "System.ArgumentOutOfRangeException");
    System::ArgIterator::_ArgIterator = pFind_Type(_assemblyPtr, "System.ArgIterator");
    System::ArithmeticException::_ArithmeticException = pFind_Type(_assemblyPtr, "System.ArithmeticException");
    System::ArrayTypeMismatchException::_ArrayTypeMismatchException = pFind_Type(_assemblyPtr, "System.ArrayTypeMismatchException");
    System::AsyncCallback::_AsyncCallback = pFind_Type(_assemblyPtr, "System.AsyncCallback");
    System::AttributeTargets::_AttributeTargets = pFind_Type(_assemblyPtr, "System.AttributeTargets");
    System::AttributeUsageAttribute::_AttributeUsageAttribute = pFind_Type(_assemblyPtr, "System.AttributeUsageAttribute");
    System::BadImageFormatException::_BadImageFormatException = pFind_Type(_assemblyPtr, "System.BadImageFormatException");
    System::BitConverter::_BitConverter = pFind_Type(_assemblyPtr, "System.BitConverter");
    System::Boolean::_Boolean = pFind_Type(_assemblyPtr, "System.Boolean");
    System::Buffer::_Buffer = pFind_Type(_assemblyPtr, "System.Buffer");
    System::Byte::_Byte = pFind_Type(_assemblyPtr, "System.Byte");
    System::CannotUnloadAppDomainException::_CannotUnloadAppDomainException = pFind_Type(_assemblyPtr, "System.CannotUnloadAppDomainException");
    System::Char::_Char = pFind_Type(_assemblyPtr, "System.Char");
    System::CharEnumerator::_CharEnumerator = pFind_Type(_assemblyPtr, "System.CharEnumerator");
    System::CLSCompliantAttribute::_CLSCompliantAttribute = pFind_Type(_assemblyPtr, "System.CLSCompliantAttribute");
    System::TypeUnloadedException::_TypeUnloadedException = pFind_Type(_assemblyPtr, "System.TypeUnloadedException");
    System::Runtime::InteropServices::_Thread::__Thread = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._Thread");
    System::Console::_Console = pFind_Type(_assemblyPtr, "System.Console");
    System::Runtime::ConstrainedExecution::CriticalFinalizerObject::_CriticalFinalizerObject = pFind_Type(_assemblyPtr, "System.Runtime.ConstrainedExecution.CriticalFinalizerObject");
    System::ConsoleCancelEventHandler::_ConsoleCancelEventHandler = pFind_Type(_assemblyPtr, "System.ConsoleCancelEventHandler");
    System::ConsoleCancelEventArgs::_ConsoleCancelEventArgs = pFind_Type(_assemblyPtr, "System.ConsoleCancelEventArgs");
    System::ConsoleColor::_ConsoleColor = pFind_Type(_assemblyPtr, "System.ConsoleColor");
    System::ConsoleKey::_ConsoleKey = pFind_Type(_assemblyPtr, "System.ConsoleKey");
    System::ConsoleKeyInfo::_ConsoleKeyInfo = pFind_Type(_assemblyPtr, "System.ConsoleKeyInfo");
    System::ConsoleModifiers::_ConsoleModifiers = pFind_Type(_assemblyPtr, "System.ConsoleModifiers");
    System::ConsoleSpecialKey::_ConsoleSpecialKey = pFind_Type(_assemblyPtr, "System.ConsoleSpecialKey");
    System::ContextMarshalException::_ContextMarshalException = pFind_Type(_assemblyPtr, "System.ContextMarshalException");
    System::Convert::_Convert = pFind_Type(_assemblyPtr, "System.Convert");
    System::Base64FormattingOptions::_Base64FormattingOptions = pFind_Type(_assemblyPtr, "System.Base64FormattingOptions");
    System::ContextBoundObject::_ContextBoundObject = pFind_Type(_assemblyPtr, "System.ContextBoundObject");
    System::ContextStaticAttribute::_ContextStaticAttribute = pFind_Type(_assemblyPtr, "System.ContextStaticAttribute");
    System::Runtime::CompilerServices::StringFreezingAttribute::_StringFreezingAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.StringFreezingAttribute");
    System::TimeZone::_TimeZone = pFind_Type(_assemblyPtr, "System.TimeZone");
    System::DayOfWeek::_DayOfWeek = pFind_Type(_assemblyPtr, "System.DayOfWeek");
    System::DBNull::_DBNull = pFind_Type(_assemblyPtr, "System.DBNull");
    System::Decimal::_Decimal = pFind_Type(_assemblyPtr, "System.Decimal");
    System::Reflection::Binder::_Binder = pFind_Type(_assemblyPtr, "System.Reflection.Binder");
    System::Runtime::Serialization::IObjectReference::_IObjectReference = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.IObjectReference");
    System::DivideByZeroException::_DivideByZeroException = pFind_Type(_assemblyPtr, "System.DivideByZeroException");
    System::Double::_Double = pFind_Type(_assemblyPtr, "System.Double");
    System::DuplicateWaitObjectException::_DuplicateWaitObjectException = pFind_Type(_assemblyPtr, "System.DuplicateWaitObjectException");
    System::TypeLoadException::_TypeLoadException = pFind_Type(_assemblyPtr, "System.TypeLoadException");
    System::EntryPointNotFoundException::_EntryPointNotFoundException = pFind_Type(_assemblyPtr, "System.EntryPointNotFoundException");
    System::DllNotFoundException::_DllNotFoundException = pFind_Type(_assemblyPtr, "System.DllNotFoundException");
    System::EnvironmentVariableTarget::_EnvironmentVariableTarget = pFind_Type(_assemblyPtr, "System.EnvironmentVariableTarget");
    System::Environment::_Environment = pFind_Type(_assemblyPtr, "System.Environment");
    System::EventHandler::_EventHandler = pFind_Type(_assemblyPtr, "System.EventHandler");
    System::FieldAccessException::_FieldAccessException = pFind_Type(_assemblyPtr, "System.FieldAccessException");
    System::FlagsAttribute::_FlagsAttribute = pFind_Type(_assemblyPtr, "System.FlagsAttribute");
    System::FormatException::_FormatException = pFind_Type(_assemblyPtr, "System.FormatException");
    System::GCCollectionMode::_GCCollectionMode = pFind_Type(_assemblyPtr, "System.GCCollectionMode");
    System::GCNotificationStatus::_GCNotificationStatus = pFind_Type(_assemblyPtr, "System.GCNotificationStatus");
    System::GC::_GC = pFind_Type(_assemblyPtr, "System.GC");
    System::Guid::_Guid = pFind_Type(_assemblyPtr, "System.Guid");
    System::IAsyncResult::_IAsyncResult = pFind_Type(_assemblyPtr, "System.IAsyncResult");
    System::ICustomFormatter::_ICustomFormatter = pFind_Type(_assemblyPtr, "System.ICustomFormatter");
    System::IFormatProvider::_IFormatProvider = pFind_Type(_assemblyPtr, "System.IFormatProvider");
    System::IndexOutOfRangeException::_IndexOutOfRangeException = pFind_Type(_assemblyPtr, "System.IndexOutOfRangeException");
    System::InsufficientMemoryException::_InsufficientMemoryException = pFind_Type(_assemblyPtr, "System.InsufficientMemoryException");
    System::Int16::_Int16 = pFind_Type(_assemblyPtr, "System.Int16");
    System::Int32::_Int32 = pFind_Type(_assemblyPtr, "System.Int32");
    System::Int64::_Int64 = pFind_Type(_assemblyPtr, "System.Int64");
    System::IntPtr::_IntPtr = pFind_Type(_assemblyPtr, "System.IntPtr");
    System::InvalidCastException::_InvalidCastException = pFind_Type(_assemblyPtr, "System.InvalidCastException");
    System::InvalidOperationException::_InvalidOperationException = pFind_Type(_assemblyPtr, "System.InvalidOperationException");
    System::InvalidProgramException::_InvalidProgramException = pFind_Type(_assemblyPtr, "System.InvalidProgramException");
    System::IServiceProvider::_IServiceProvider = pFind_Type(_assemblyPtr, "System.IServiceProvider");
    System::LocalDataStoreSlot::_LocalDataStoreSlot = pFind_Type(_assemblyPtr, "System.LocalDataStoreSlot");
    System::Math::_Math = pFind_Type(_assemblyPtr, "System.Math");
    System::MethodAccessException::_MethodAccessException = pFind_Type(_assemblyPtr, "System.MethodAccessException");
    System::MidpointRounding::_MidpointRounding = pFind_Type(_assemblyPtr, "System.MidpointRounding");
    System::MissingMemberException::_MissingMemberException = pFind_Type(_assemblyPtr, "System.MissingMemberException");
    System::MissingFieldException::_MissingFieldException = pFind_Type(_assemblyPtr, "System.MissingFieldException");
    System::MissingMethodException::_MissingMethodException = pFind_Type(_assemblyPtr, "System.MissingMethodException");
    System::MulticastNotSupportedException::_MulticastNotSupportedException = pFind_Type(_assemblyPtr, "System.MulticastNotSupportedException");
    System::NonSerializedAttribute::_NonSerializedAttribute = pFind_Type(_assemblyPtr, "System.NonSerializedAttribute");
    System::NotFiniteNumberException::_NotFiniteNumberException = pFind_Type(_assemblyPtr, "System.NotFiniteNumberException");
    System::NotImplementedException::_NotImplementedException = pFind_Type(_assemblyPtr, "System.NotImplementedException");
    System::NotSupportedException::_NotSupportedException = pFind_Type(_assemblyPtr, "System.NotSupportedException");
    System::NullReferenceException::_NullReferenceException = pFind_Type(_assemblyPtr, "System.NullReferenceException");
    System::ObjectDisposedException::_ObjectDisposedException = pFind_Type(_assemblyPtr, "System.ObjectDisposedException");
    System::ObsoleteAttribute::_ObsoleteAttribute = pFind_Type(_assemblyPtr, "System.ObsoleteAttribute");
    System::OperatingSystem::_OperatingSystem = pFind_Type(_assemblyPtr, "System.OperatingSystem");
    System::OperationCanceledException::_OperationCanceledException = pFind_Type(_assemblyPtr, "System.OperationCanceledException");
    System::OverflowException::_OverflowException = pFind_Type(_assemblyPtr, "System.OverflowException");
    System::ParamArrayAttribute::_ParamArrayAttribute = pFind_Type(_assemblyPtr, "System.ParamArrayAttribute");
    System::PlatformID::_PlatformID = pFind_Type(_assemblyPtr, "System.PlatformID");
    System::PlatformNotSupportedException::_PlatformNotSupportedException = pFind_Type(_assemblyPtr, "System.PlatformNotSupportedException");
    System::Random::_Random = pFind_Type(_assemblyPtr, "System.Random");
    System::RankException::_RankException = pFind_Type(_assemblyPtr, "System.RankException");
    System::Reflection::ICustomAttributeProvider::_ICustomAttributeProvider = pFind_Type(_assemblyPtr, "System.Reflection.ICustomAttributeProvider");
    System::Runtime::InteropServices::_MemberInfo::__MemberInfo = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._MemberInfo");
    System::Reflection::MemberInfo::_MemberInfo = pFind_Type(_assemblyPtr, "System.Reflection.MemberInfo");
    System::Runtime::InteropServices::_Type::__Type = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._Type");
    System::Reflection::IReflect::_IReflect = pFind_Type(_assemblyPtr, "System.Reflection.IReflect");
    System::Type::_Type = pFind_Type(_assemblyPtr, "System.Type");
    System::RuntimeArgumentHandle::_RuntimeArgumentHandle = pFind_Type(_assemblyPtr, "System.RuntimeArgumentHandle");
    System::RuntimeTypeHandle::_RuntimeTypeHandle = pFind_Type(_assemblyPtr, "System.RuntimeTypeHandle");
    System::RuntimeMethodHandle::_RuntimeMethodHandle = pFind_Type(_assemblyPtr, "System.RuntimeMethodHandle");
    System::RuntimeFieldHandle::_RuntimeFieldHandle = pFind_Type(_assemblyPtr, "System.RuntimeFieldHandle");
    System::ModuleHandle::_ModuleHandle = pFind_Type(_assemblyPtr, "System.ModuleHandle");
    System::SByte::_SByte = pFind_Type(_assemblyPtr, "System.SByte");
    System::SerializableAttribute::_SerializableAttribute = pFind_Type(_assemblyPtr, "System.SerializableAttribute");
    System::Single::_Single = pFind_Type(_assemblyPtr, "System.Single");
    System::TimeoutException::_TimeoutException = pFind_Type(_assemblyPtr, "System.TimeoutException");
    System::TimeSpan::_TimeSpan = pFind_Type(_assemblyPtr, "System.TimeSpan");
    System::TypeCode::_TypeCode = pFind_Type(_assemblyPtr, "System.TypeCode");
    System::TypedReference::_TypedReference = pFind_Type(_assemblyPtr, "System.TypedReference");
    System::TypeInitializationException::_TypeInitializationException = pFind_Type(_assemblyPtr, "System.TypeInitializationException");
    System::UInt16::_UInt16 = pFind_Type(_assemblyPtr, "System.UInt16");
    System::UInt32::_UInt32 = pFind_Type(_assemblyPtr, "System.UInt32");
    System::UInt64::_UInt64 = pFind_Type(_assemblyPtr, "System.UInt64");
    System::UIntPtr::_UIntPtr = pFind_Type(_assemblyPtr, "System.UIntPtr");
    System::UnauthorizedAccessException::_UnauthorizedAccessException = pFind_Type(_assemblyPtr, "System.UnauthorizedAccessException");
    System::UnhandledExceptionEventArgs::_UnhandledExceptionEventArgs = pFind_Type(_assemblyPtr, "System.UnhandledExceptionEventArgs");
    System::UnhandledExceptionEventHandler::_UnhandledExceptionEventHandler = pFind_Type(_assemblyPtr, "System.UnhandledExceptionEventHandler");
    System::Version::_Version = pFind_Type(_assemblyPtr, "System.Version");
    System::Void::_Void = pFind_Type(_assemblyPtr, "System.Void");
    System::WeakReference::_WeakReference = pFind_Type(_assemblyPtr, "System.WeakReference");
    System::Threading::AbandonedMutexException::_AbandonedMutexException = pFind_Type(_assemblyPtr, "System.Threading.AbandonedMutexException");
    System::Threading::WaitHandle::_WaitHandle = pFind_Type(_assemblyPtr, "System.Threading.WaitHandle");
    System::Threading::EventWaitHandle::_EventWaitHandle = pFind_Type(_assemblyPtr, "System.Threading.EventWaitHandle");
    System::Threading::AutoResetEvent::_AutoResetEvent = pFind_Type(_assemblyPtr, "System.Threading.AutoResetEvent");
    System::Threading::SendOrPostCallback::_SendOrPostCallback = pFind_Type(_assemblyPtr, "System.Threading.SendOrPostCallback");
    System::Threading::SynchronizationContext::_SynchronizationContext = pFind_Type(_assemblyPtr, "System.Threading.SynchronizationContext");
    System::Runtime::InteropServices::SafeHandle::_SafeHandle = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.SafeHandle");
    System::Threading::CompressedStack::_CompressedStack = pFind_Type(_assemblyPtr, "System.Threading.CompressedStack");
    System::Threading::EventResetMode::_EventResetMode = pFind_Type(_assemblyPtr, "System.Threading.EventResetMode");
    System::Threading::AsyncFlowControl::_AsyncFlowControl = pFind_Type(_assemblyPtr, "System.Threading.AsyncFlowControl");
    System::Threading::ContextCallback::_ContextCallback = pFind_Type(_assemblyPtr, "System.Threading.ContextCallback");
    System::Threading::ExecutionContext::_ExecutionContext = pFind_Type(_assemblyPtr, "System.Threading.ExecutionContext");
    System::Threading::Interlocked::_Interlocked = pFind_Type(_assemblyPtr, "System.Threading.Interlocked");
    System::Runtime::Remoting::IObjectHandle::_IObjectHandle = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.IObjectHandle");
    System::Threading::HostExecutionContext::_HostExecutionContext = pFind_Type(_assemblyPtr, "System.Threading.HostExecutionContext");
    System::Threading::HostExecutionContextManager::_HostExecutionContextManager = pFind_Type(_assemblyPtr, "System.Threading.HostExecutionContextManager");
    System::Threading::LockCookie::_LockCookie = pFind_Type(_assemblyPtr, "System.Threading.LockCookie");
    System::Threading::ManualResetEvent::_ManualResetEvent = pFind_Type(_assemblyPtr, "System.Threading.ManualResetEvent");
    System::Threading::Monitor::_Monitor = pFind_Type(_assemblyPtr, "System.Threading.Monitor");
    System::Threading::Mutex::_Mutex = pFind_Type(_assemblyPtr, "System.Threading.Mutex");
    System::Threading::NativeOverlapped::_NativeOverlapped = pFind_Type(_assemblyPtr, "System.Threading.NativeOverlapped");
    System::Threading::Overlapped::_Overlapped = pFind_Type(_assemblyPtr, "System.Threading.Overlapped");
    System::Threading::ParameterizedThreadStart::_ParameterizedThreadStart = pFind_Type(_assemblyPtr, "System.Threading.ParameterizedThreadStart");
    System::Threading::ReaderWriterLock::_ReaderWriterLock = pFind_Type(_assemblyPtr, "System.Threading.ReaderWriterLock");
    System::Threading::SynchronizationLockException::_SynchronizationLockException = pFind_Type(_assemblyPtr, "System.Threading.SynchronizationLockException");
    System::Threading::Thread::_Thread = pFind_Type(_assemblyPtr, "System.Threading.Thread");
    System::Threading::ThreadAbortException::_ThreadAbortException = pFind_Type(_assemblyPtr, "System.Threading.ThreadAbortException");
    System::Threading::ThreadInterruptedException::_ThreadInterruptedException = pFind_Type(_assemblyPtr, "System.Threading.ThreadInterruptedException");
    System::Threading::RegisteredWaitHandle::_RegisteredWaitHandle = pFind_Type(_assemblyPtr, "System.Threading.RegisteredWaitHandle");
    System::Threading::WaitCallback::_WaitCallback = pFind_Type(_assemblyPtr, "System.Threading.WaitCallback");
    System::Threading::WaitOrTimerCallback::_WaitOrTimerCallback = pFind_Type(_assemblyPtr, "System.Threading.WaitOrTimerCallback");
    System::Threading::IOCompletionCallback::_IOCompletionCallback = pFind_Type(_assemblyPtr, "System.Threading.IOCompletionCallback");
    System::Threading::ThreadPool::_ThreadPool = pFind_Type(_assemblyPtr, "System.Threading.ThreadPool");
    System::Threading::ThreadPriority::_ThreadPriority = pFind_Type(_assemblyPtr, "System.Threading.ThreadPriority");
    System::Threading::ThreadStart::_ThreadStart = pFind_Type(_assemblyPtr, "System.Threading.ThreadStart");
    System::Threading::ThreadState::_ThreadState = pFind_Type(_assemblyPtr, "System.Threading.ThreadState");
    System::Threading::ThreadStateException::_ThreadStateException = pFind_Type(_assemblyPtr, "System.Threading.ThreadStateException");
    System::ThreadStaticAttribute::_ThreadStaticAttribute = pFind_Type(_assemblyPtr, "System.ThreadStaticAttribute");
    System::Threading::ThreadStartException::_ThreadStartException = pFind_Type(_assemblyPtr, "System.Threading.ThreadStartException");
    System::Threading::Timeout::_Timeout = pFind_Type(_assemblyPtr, "System.Threading.Timeout");
    System::Threading::TimerCallback::_TimerCallback = pFind_Type(_assemblyPtr, "System.Threading.TimerCallback");
    System::Threading::Timer::_Timer = pFind_Type(_assemblyPtr, "System.Threading.Timer");
    System::Threading::WaitHandleCannotBeOpenedException::_WaitHandleCannotBeOpenedException = pFind_Type(_assemblyPtr, "System.Threading.WaitHandleCannotBeOpenedException");
    System::Threading::ApartmentState::_ApartmentState = pFind_Type(_assemblyPtr, "System.Threading.ApartmentState");
    System::STAThreadAttribute::_STAThreadAttribute = pFind_Type(_assemblyPtr, "System.STAThreadAttribute");
    System::MTAThreadAttribute::_MTAThreadAttribute = pFind_Type(_assemblyPtr, "System.MTAThreadAttribute");
    System::Collections::ArrayList::_ArrayList = pFind_Type(_assemblyPtr, "System.Collections.ArrayList");
    System::Collections::BitArray::_BitArray = pFind_Type(_assemblyPtr, "System.Collections.BitArray");
    System::Collections::CaseInsensitiveComparer::_CaseInsensitiveComparer = pFind_Type(_assemblyPtr, "System.Collections.CaseInsensitiveComparer");
    System::Collections::IHashCodeProvider::_IHashCodeProvider = pFind_Type(_assemblyPtr, "System.Collections.IHashCodeProvider");
    System::Collections::CaseInsensitiveHashCodeProvider::_CaseInsensitiveHashCodeProvider = pFind_Type(_assemblyPtr, "System.Collections.CaseInsensitiveHashCodeProvider");
    System::Collections::CollectionBase::_CollectionBase = pFind_Type(_assemblyPtr, "System.Collections.CollectionBase");
    System::Collections::Comparer::_Comparer = pFind_Type(_assemblyPtr, "System.Collections.Comparer");
    System::Collections::IDictionary::_IDictionary = pFind_Type(_assemblyPtr, "System.Collections.IDictionary");
    System::Collections::DictionaryBase::_DictionaryBase = pFind_Type(_assemblyPtr, "System.Collections.DictionaryBase");
    System::Collections::DictionaryEntry::_DictionaryEntry = pFind_Type(_assemblyPtr, "System.Collections.DictionaryEntry");
    System::Collections::IDictionaryEnumerator::_IDictionaryEnumerator = pFind_Type(_assemblyPtr, "System.Collections.IDictionaryEnumerator");
    System::Collections::Hashtable::_Hashtable = pFind_Type(_assemblyPtr, "System.Collections.Hashtable");
    System::Collections::Queue::_Queue = pFind_Type(_assemblyPtr, "System.Collections.Queue");
    System::Collections::ReadOnlyCollectionBase::_ReadOnlyCollectionBase = pFind_Type(_assemblyPtr, "System.Collections.ReadOnlyCollectionBase");
    System::Collections::SortedList::_SortedList = pFind_Type(_assemblyPtr, "System.Collections.SortedList");
    System::Collections::Stack::_Stack = pFind_Type(_assemblyPtr, "System.Collections.Stack");
    System::Nullable::_Nullable = pFind_Type(_assemblyPtr, "System.Nullable");
    System::Collections::Generic::KeyNotFoundException::_KeyNotFoundException = pFind_Type(_assemblyPtr, "System.Collections.Generic.KeyNotFoundException");
    System::Diagnostics::ConditionalAttribute::_ConditionalAttribute = pFind_Type(_assemblyPtr, "System.Diagnostics.ConditionalAttribute");
    System::Diagnostics::Debugger::_Debugger = pFind_Type(_assemblyPtr, "System.Diagnostics.Debugger");
    System::Diagnostics::DebuggerStepThroughAttribute::_DebuggerStepThroughAttribute = pFind_Type(_assemblyPtr, "System.Diagnostics.DebuggerStepThroughAttribute");
    System::Diagnostics::DebuggerStepperBoundaryAttribute::_DebuggerStepperBoundaryAttribute = pFind_Type(_assemblyPtr, "System.Diagnostics.DebuggerStepperBoundaryAttribute");
    System::Diagnostics::DebuggerHiddenAttribute::_DebuggerHiddenAttribute = pFind_Type(_assemblyPtr, "System.Diagnostics.DebuggerHiddenAttribute");
    System::Diagnostics::DebuggerNonUserCodeAttribute::_DebuggerNonUserCodeAttribute = pFind_Type(_assemblyPtr, "System.Diagnostics.DebuggerNonUserCodeAttribute");
    System::Diagnostics::DebuggableAttribute::_DebuggableAttribute = pFind_Type(_assemblyPtr, "System.Diagnostics.DebuggableAttribute");
    System::Diagnostics::DebuggerBrowsableState::_DebuggerBrowsableState = pFind_Type(_assemblyPtr, "System.Diagnostics.DebuggerBrowsableState");
    System::Diagnostics::DebuggerBrowsableAttribute::_DebuggerBrowsableAttribute = pFind_Type(_assemblyPtr, "System.Diagnostics.DebuggerBrowsableAttribute");
    System::Diagnostics::DebuggerTypeProxyAttribute::_DebuggerTypeProxyAttribute = pFind_Type(_assemblyPtr, "System.Diagnostics.DebuggerTypeProxyAttribute");
    System::Diagnostics::DebuggerDisplayAttribute::_DebuggerDisplayAttribute = pFind_Type(_assemblyPtr, "System.Diagnostics.DebuggerDisplayAttribute");
    System::Diagnostics::DebuggerVisualizerAttribute::_DebuggerVisualizerAttribute = pFind_Type(_assemblyPtr, "System.Diagnostics.DebuggerVisualizerAttribute");
    System::Diagnostics::StackTrace::_StackTrace = pFind_Type(_assemblyPtr, "System.Diagnostics.StackTrace");
    System::Diagnostics::StackFrame::_StackFrame = pFind_Type(_assemblyPtr, "System.Diagnostics.StackFrame");
    System::Diagnostics::CodeAnalysis::SuppressMessageAttribute::_SuppressMessageAttribute = pFind_Type(_assemblyPtr, "System.Diagnostics.CodeAnalysis.SuppressMessageAttribute");
    System::Diagnostics::SymbolStore::ISymbolBinder::_ISymbolBinder = pFind_Type(_assemblyPtr, "System.Diagnostics.SymbolStore.ISymbolBinder");
    System::Diagnostics::SymbolStore::ISymbolBinder1::_ISymbolBinder1 = pFind_Type(_assemblyPtr, "System.Diagnostics.SymbolStore.ISymbolBinder1");
    System::Diagnostics::SymbolStore::ISymbolDocument::_ISymbolDocument = pFind_Type(_assemblyPtr, "System.Diagnostics.SymbolStore.ISymbolDocument");
    System::Diagnostics::SymbolStore::ISymbolDocumentWriter::_ISymbolDocumentWriter = pFind_Type(_assemblyPtr, "System.Diagnostics.SymbolStore.ISymbolDocumentWriter");
    System::Diagnostics::SymbolStore::ISymbolMethod::_ISymbolMethod = pFind_Type(_assemblyPtr, "System.Diagnostics.SymbolStore.ISymbolMethod");
    System::Diagnostics::SymbolStore::ISymbolNamespace::_ISymbolNamespace = pFind_Type(_assemblyPtr, "System.Diagnostics.SymbolStore.ISymbolNamespace");
    System::Diagnostics::SymbolStore::ISymbolReader::_ISymbolReader = pFind_Type(_assemblyPtr, "System.Diagnostics.SymbolStore.ISymbolReader");
    System::Diagnostics::SymbolStore::ISymbolScope::_ISymbolScope = pFind_Type(_assemblyPtr, "System.Diagnostics.SymbolStore.ISymbolScope");
    System::Diagnostics::SymbolStore::ISymbolVariable::_ISymbolVariable = pFind_Type(_assemblyPtr, "System.Diagnostics.SymbolStore.ISymbolVariable");
    System::Diagnostics::SymbolStore::ISymbolWriter::_ISymbolWriter = pFind_Type(_assemblyPtr, "System.Diagnostics.SymbolStore.ISymbolWriter");
    System::Diagnostics::SymbolStore::SymAddressKind::_SymAddressKind = pFind_Type(_assemblyPtr, "System.Diagnostics.SymbolStore.SymAddressKind");
    System::Diagnostics::SymbolStore::SymDocumentType::_SymDocumentType = pFind_Type(_assemblyPtr, "System.Diagnostics.SymbolStore.SymDocumentType");
    System::Diagnostics::SymbolStore::SymLanguageType::_SymLanguageType = pFind_Type(_assemblyPtr, "System.Diagnostics.SymbolStore.SymLanguageType");
    System::Diagnostics::SymbolStore::SymLanguageVendor::_SymLanguageVendor = pFind_Type(_assemblyPtr, "System.Diagnostics.SymbolStore.SymLanguageVendor");
    System::Diagnostics::SymbolStore::SymbolToken::_SymbolToken = pFind_Type(_assemblyPtr, "System.Diagnostics.SymbolStore.SymbolToken");
    System::Reflection::AmbiguousMatchException::_AmbiguousMatchException = pFind_Type(_assemblyPtr, "System.Reflection.AmbiguousMatchException");
    System::Reflection::ModuleResolveEventHandler::_ModuleResolveEventHandler = pFind_Type(_assemblyPtr, "System.Reflection.ModuleResolveEventHandler");
    System::Runtime::InteropServices::_Assembly::__Assembly = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._Assembly");
    System::Reflection::Assembly::_Assembly = pFind_Type(_assemblyPtr, "System.Reflection.Assembly");
    System::Reflection::AssemblyCopyrightAttribute::_AssemblyCopyrightAttribute = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyCopyrightAttribute");
    System::Reflection::AssemblyTrademarkAttribute::_AssemblyTrademarkAttribute = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyTrademarkAttribute");
    System::Reflection::AssemblyProductAttribute::_AssemblyProductAttribute = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyProductAttribute");
    System::Reflection::AssemblyCompanyAttribute::_AssemblyCompanyAttribute = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyCompanyAttribute");
    System::Reflection::AssemblyDescriptionAttribute::_AssemblyDescriptionAttribute = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyDescriptionAttribute");
    System::Reflection::AssemblyTitleAttribute::_AssemblyTitleAttribute = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyTitleAttribute");
    System::Reflection::AssemblyConfigurationAttribute::_AssemblyConfigurationAttribute = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyConfigurationAttribute");
    System::Reflection::AssemblyDefaultAliasAttribute::_AssemblyDefaultAliasAttribute = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyDefaultAliasAttribute");
    System::Reflection::AssemblyInformationalVersionAttribute::_AssemblyInformationalVersionAttribute = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyInformationalVersionAttribute");
    System::Reflection::AssemblyFileVersionAttribute::_AssemblyFileVersionAttribute = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyFileVersionAttribute");
    System::Reflection::AssemblyCultureAttribute::_AssemblyCultureAttribute = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyCultureAttribute");
    System::Reflection::AssemblyVersionAttribute::_AssemblyVersionAttribute = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyVersionAttribute");
    System::Reflection::AssemblyKeyFileAttribute::_AssemblyKeyFileAttribute = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyKeyFileAttribute");
    System::Reflection::AssemblyDelaySignAttribute::_AssemblyDelaySignAttribute = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyDelaySignAttribute");
    System::Reflection::AssemblyAlgorithmIdAttribute::_AssemblyAlgorithmIdAttribute = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyAlgorithmIdAttribute");
    System::Reflection::AssemblyFlagsAttribute::_AssemblyFlagsAttribute = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyFlagsAttribute");
    System::Reflection::AssemblyKeyNameAttribute::_AssemblyKeyNameAttribute = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyKeyNameAttribute");
    System::Runtime::InteropServices::_AssemblyName::__AssemblyName = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._AssemblyName");
    System::Reflection::AssemblyName::_AssemblyName = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyName");
    System::Reflection::AssemblyNameProxy::_AssemblyNameProxy = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyNameProxy");
    System::Reflection::AssemblyNameFlags::_AssemblyNameFlags = pFind_Type(_assemblyPtr, "System.Reflection.AssemblyNameFlags");
    System::Reflection::ProcessorArchitecture::_ProcessorArchitecture = pFind_Type(_assemblyPtr, "System.Reflection.ProcessorArchitecture");
    System::Reflection::CustomAttributeFormatException::_CustomAttributeFormatException = pFind_Type(_assemblyPtr, "System.Reflection.CustomAttributeFormatException");
    System::Reflection::BindingFlags::_BindingFlags = pFind_Type(_assemblyPtr, "System.Reflection.BindingFlags");
    System::Reflection::CallingConventions::_CallingConventions = pFind_Type(_assemblyPtr, "System.Reflection.CallingConventions");
    System::Runtime::InteropServices::_MethodBase::__MethodBase = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._MethodBase");
    System::Runtime::InteropServices::_MethodInfo::__MethodInfo = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._MethodInfo");
    System::Runtime::InteropServices::_ConstructorInfo::__ConstructorInfo = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._ConstructorInfo");
    System::Runtime::InteropServices::_FieldInfo::__FieldInfo = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._FieldInfo");
    System::Runtime::InteropServices::_PropertyInfo::__PropertyInfo = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._PropertyInfo");
    System::Runtime::InteropServices::_EventInfo::__EventInfo = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._EventInfo");
    System::Runtime::InteropServices::_ParameterInfo::__ParameterInfo = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._ParameterInfo");
    System::Runtime::InteropServices::_Module::__Module = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._Module");
    System::Reflection::CustomAttributeData::_CustomAttributeData = pFind_Type(_assemblyPtr, "System.Reflection.CustomAttributeData");
    System::Reflection::CustomAttributeNamedArgument::_CustomAttributeNamedArgument = pFind_Type(_assemblyPtr, "System.Reflection.CustomAttributeNamedArgument");
    System::Reflection::CustomAttributeTypedArgument::_CustomAttributeTypedArgument = pFind_Type(_assemblyPtr, "System.Reflection.CustomAttributeTypedArgument");
    System::Reflection::DefaultMemberAttribute::_DefaultMemberAttribute = pFind_Type(_assemblyPtr, "System.Reflection.DefaultMemberAttribute");
    System::Reflection::EventAttributes::_EventAttributes = pFind_Type(_assemblyPtr, "System.Reflection.EventAttributes");
    System::Reflection::FieldAttributes::_FieldAttributes = pFind_Type(_assemblyPtr, "System.Reflection.FieldAttributes");
    System::Reflection::GenericParameterAttributes::_GenericParameterAttributes = pFind_Type(_assemblyPtr, "System.Reflection.GenericParameterAttributes");
    System::Reflection::InterfaceMapping::_InterfaceMapping = pFind_Type(_assemblyPtr, "System.Reflection.InterfaceMapping");
    System::Reflection::InvalidFilterCriteriaException::_InvalidFilterCriteriaException = pFind_Type(_assemblyPtr, "System.Reflection.InvalidFilterCriteriaException");
    System::Reflection::ManifestResourceInfo::_ManifestResourceInfo = pFind_Type(_assemblyPtr, "System.Reflection.ManifestResourceInfo");
    System::Reflection::ResourceLocation::_ResourceLocation = pFind_Type(_assemblyPtr, "System.Reflection.ResourceLocation");
    System::Reflection::MemberFilter::_MemberFilter = pFind_Type(_assemblyPtr, "System.Reflection.MemberFilter");
    System::Reflection::MemberTypes::_MemberTypes = pFind_Type(_assemblyPtr, "System.Reflection.MemberTypes");
    System::Reflection::MethodAttributes::_MethodAttributes = pFind_Type(_assemblyPtr, "System.Reflection.MethodAttributes");
    System::Reflection::MethodImplAttributes::_MethodImplAttributes = pFind_Type(_assemblyPtr, "System.Reflection.MethodImplAttributes");
    System::Reflection::Missing::_Missing = pFind_Type(_assemblyPtr, "System.Reflection.Missing");
    System::Reflection::PortableExecutableKinds::_PortableExecutableKinds = pFind_Type(_assemblyPtr, "System.Reflection.PortableExecutableKinds");
    System::Reflection::ImageFileMachine::_ImageFileMachine = pFind_Type(_assemblyPtr, "System.Reflection.ImageFileMachine");
    System::Reflection::Module::_Module = pFind_Type(_assemblyPtr, "System.Reflection.Module");
    System::Reflection::ObfuscateAssemblyAttribute::_ObfuscateAssemblyAttribute = pFind_Type(_assemblyPtr, "System.Reflection.ObfuscateAssemblyAttribute");
    System::Reflection::ObfuscationAttribute::_ObfuscationAttribute = pFind_Type(_assemblyPtr, "System.Reflection.ObfuscationAttribute");
    System::Reflection::ExceptionHandlingClauseOptions::_ExceptionHandlingClauseOptions = pFind_Type(_assemblyPtr, "System.Reflection.ExceptionHandlingClauseOptions");
    System::Reflection::ExceptionHandlingClause::_ExceptionHandlingClause = pFind_Type(_assemblyPtr, "System.Reflection.ExceptionHandlingClause");
    System::Reflection::MethodBody::_MethodBody = pFind_Type(_assemblyPtr, "System.Reflection.MethodBody");
    System::Reflection::LocalVariableInfo::_LocalVariableInfo = pFind_Type(_assemblyPtr, "System.Reflection.LocalVariableInfo");
    System::Reflection::ParameterAttributes::_ParameterAttributes = pFind_Type(_assemblyPtr, "System.Reflection.ParameterAttributes");
    System::Reflection::ParameterModifier::_ParameterModifier = pFind_Type(_assemblyPtr, "System.Reflection.ParameterModifier");
    System::Reflection::Pointer::_Pointer = pFind_Type(_assemblyPtr, "System.Reflection.Pointer");
    System::Reflection::PropertyAttributes::_PropertyAttributes = pFind_Type(_assemblyPtr, "System.Reflection.PropertyAttributes");
    System::Reflection::ReflectionTypeLoadException::_ReflectionTypeLoadException = pFind_Type(_assemblyPtr, "System.Reflection.ReflectionTypeLoadException");
    System::Reflection::ResourceAttributes::_ResourceAttributes = pFind_Type(_assemblyPtr, "System.Reflection.ResourceAttributes");
    System::Reflection::StrongNameKeyPair::_StrongNameKeyPair = pFind_Type(_assemblyPtr, "System.Reflection.StrongNameKeyPair");
    System::Reflection::TargetException::_TargetException = pFind_Type(_assemblyPtr, "System.Reflection.TargetException");
    System::Reflection::TargetInvocationException::_TargetInvocationException = pFind_Type(_assemblyPtr, "System.Reflection.TargetInvocationException");
    System::Reflection::TargetParameterCountException::_TargetParameterCountException = pFind_Type(_assemblyPtr, "System.Reflection.TargetParameterCountException");
    System::Reflection::TypeAttributes::_TypeAttributes = pFind_Type(_assemblyPtr, "System.Reflection.TypeAttributes");
    System::Reflection::TypeDelegator::_TypeDelegator = pFind_Type(_assemblyPtr, "System.Reflection.TypeDelegator");
    System::Reflection::TypeFilter::_TypeFilter = pFind_Type(_assemblyPtr, "System.Reflection.TypeFilter");
    System::Reflection::MethodBase::_MethodBase = pFind_Type(_assemblyPtr, "System.Reflection.MethodBase");
    System::Reflection::ConstructorInfo::_ConstructorInfo = pFind_Type(_assemblyPtr, "System.Reflection.ConstructorInfo");
    System::Reflection::MethodInfo::_MethodInfo = pFind_Type(_assemblyPtr, "System.Reflection.MethodInfo");
    System::Reflection::FieldInfo::_FieldInfo = pFind_Type(_assemblyPtr, "System.Reflection.FieldInfo");
    System::Reflection::EventInfo::_EventInfo = pFind_Type(_assemblyPtr, "System.Reflection.EventInfo");
    System::Reflection::PropertyInfo::_PropertyInfo = pFind_Type(_assemblyPtr, "System.Reflection.PropertyInfo");
    System::Reflection::ParameterInfo::_ParameterInfo = pFind_Type(_assemblyPtr, "System.Reflection.ParameterInfo");
    System::Runtime::Serialization::IFormatter::_IFormatter = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.IFormatter");
    System::Runtime::Serialization::Formatter::_Formatter = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.Formatter");
    System::Runtime::Serialization::IFormatterConverter::_IFormatterConverter = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.IFormatterConverter");
    System::Runtime::Serialization::FormatterConverter::_FormatterConverter = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.FormatterConverter");
    System::Runtime::Serialization::FormatterServices::_FormatterServices = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.FormatterServices");
    System::Runtime::Serialization::ISerializationSurrogate::_ISerializationSurrogate = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.ISerializationSurrogate");
    System::Runtime::Serialization::ISurrogateSelector::_ISurrogateSelector = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.ISurrogateSelector");
    System::Runtime::Serialization::ObjectIDGenerator::_ObjectIDGenerator = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.ObjectIDGenerator");
    System::Runtime::Serialization::ObjectManager::_ObjectManager = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.ObjectManager");
    System::Runtime::Serialization::SerializationObjectManager::_SerializationObjectManager = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.SerializationObjectManager");
    System::Runtime::Serialization::OptionalFieldAttribute::_OptionalFieldAttribute = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.OptionalFieldAttribute");
    System::Runtime::Serialization::OnSerializingAttribute::_OnSerializingAttribute = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.OnSerializingAttribute");
    System::Runtime::Serialization::OnSerializedAttribute::_OnSerializedAttribute = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.OnSerializedAttribute");
    System::Runtime::Serialization::OnDeserializingAttribute::_OnDeserializingAttribute = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.OnDeserializingAttribute");
    System::Runtime::Serialization::OnDeserializedAttribute::_OnDeserializedAttribute = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.OnDeserializedAttribute");
    System::Runtime::Serialization::SerializationBinder::_SerializationBinder = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.SerializationBinder");
    System::Runtime::Serialization::SerializationInfo::_SerializationInfo = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.SerializationInfo");
    System::Runtime::Serialization::SerializationEntry::_SerializationEntry = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.SerializationEntry");
    System::Runtime::Serialization::SerializationInfoEnumerator::_SerializationInfoEnumerator = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.SerializationInfoEnumerator");
    System::Runtime::Serialization::SerializationException::_SerializationException = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.SerializationException");
    System::Runtime::Serialization::StreamingContext::_StreamingContext = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.StreamingContext");
    System::Runtime::Serialization::StreamingContextStates::_StreamingContextStates = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.StreamingContextStates");
    System::Runtime::Serialization::SurrogateSelector::_SurrogateSelector = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.SurrogateSelector");
    System::Globalization::Calendar::_Calendar = pFind_Type(_assemblyPtr, "System.Globalization.Calendar");
    System::Globalization::CalendarAlgorithmType::_CalendarAlgorithmType = pFind_Type(_assemblyPtr, "System.Globalization.CalendarAlgorithmType");
    System::Globalization::CalendarWeekRule::_CalendarWeekRule = pFind_Type(_assemblyPtr, "System.Globalization.CalendarWeekRule");
    System::Globalization::CharUnicodeInfo::_CharUnicodeInfo = pFind_Type(_assemblyPtr, "System.Globalization.CharUnicodeInfo");
    System::Globalization::EastAsianLunisolarCalendar::_EastAsianLunisolarCalendar = pFind_Type(_assemblyPtr, "System.Globalization.EastAsianLunisolarCalendar");
    System::Globalization::ChineseLunisolarCalendar::_ChineseLunisolarCalendar = pFind_Type(_assemblyPtr, "System.Globalization.ChineseLunisolarCalendar");
    System::Globalization::CompareOptions::_CompareOptions = pFind_Type(_assemblyPtr, "System.Globalization.CompareOptions");
    System::Globalization::CompareInfo::_CompareInfo = pFind_Type(_assemblyPtr, "System.Globalization.CompareInfo");
    System::Globalization::CultureInfo::_CultureInfo = pFind_Type(_assemblyPtr, "System.Globalization.CultureInfo");
    System::Globalization::CultureTypes::_CultureTypes = pFind_Type(_assemblyPtr, "System.Globalization.CultureTypes");
    System::Globalization::DateTimeStyles::_DateTimeStyles = pFind_Type(_assemblyPtr, "System.Globalization.DateTimeStyles");
    System::Globalization::DateTimeFormatInfo::_DateTimeFormatInfo = pFind_Type(_assemblyPtr, "System.Globalization.DateTimeFormatInfo");
    System::Globalization::DaylightTime::_DaylightTime = pFind_Type(_assemblyPtr, "System.Globalization.DaylightTime");
    System::Globalization::DigitShapes::_DigitShapes = pFind_Type(_assemblyPtr, "System.Globalization.DigitShapes");
    System::Globalization::GregorianCalendar::_GregorianCalendar = pFind_Type(_assemblyPtr, "System.Globalization.GregorianCalendar");
    System::Globalization::GregorianCalendarTypes::_GregorianCalendarTypes = pFind_Type(_assemblyPtr, "System.Globalization.GregorianCalendarTypes");
    System::Globalization::HebrewCalendar::_HebrewCalendar = pFind_Type(_assemblyPtr, "System.Globalization.HebrewCalendar");
    System::Globalization::HijriCalendar::_HijriCalendar = pFind_Type(_assemblyPtr, "System.Globalization.HijriCalendar");
    System::Globalization::IdnMapping::_IdnMapping = pFind_Type(_assemblyPtr, "System.Globalization.IdnMapping");
    System::Globalization::JapaneseCalendar::_JapaneseCalendar = pFind_Type(_assemblyPtr, "System.Globalization.JapaneseCalendar");
    System::Globalization::JapaneseLunisolarCalendar::_JapaneseLunisolarCalendar = pFind_Type(_assemblyPtr, "System.Globalization.JapaneseLunisolarCalendar");
    System::Globalization::PersianCalendar::_PersianCalendar = pFind_Type(_assemblyPtr, "System.Globalization.PersianCalendar");
    System::Globalization::JulianCalendar::_JulianCalendar = pFind_Type(_assemblyPtr, "System.Globalization.JulianCalendar");
    System::Globalization::KoreanCalendar::_KoreanCalendar = pFind_Type(_assemblyPtr, "System.Globalization.KoreanCalendar");
    System::Globalization::KoreanLunisolarCalendar::_KoreanLunisolarCalendar = pFind_Type(_assemblyPtr, "System.Globalization.KoreanLunisolarCalendar");
    System::Globalization::RegionInfo::_RegionInfo = pFind_Type(_assemblyPtr, "System.Globalization.RegionInfo");
    System::Globalization::SortKey::_SortKey = pFind_Type(_assemblyPtr, "System.Globalization.SortKey");
    System::Globalization::StringInfo::_StringInfo = pFind_Type(_assemblyPtr, "System.Globalization.StringInfo");
    System::Globalization::TaiwanCalendar::_TaiwanCalendar = pFind_Type(_assemblyPtr, "System.Globalization.TaiwanCalendar");
    System::Globalization::TaiwanLunisolarCalendar::_TaiwanLunisolarCalendar = pFind_Type(_assemblyPtr, "System.Globalization.TaiwanLunisolarCalendar");
    System::Globalization::TextElementEnumerator::_TextElementEnumerator = pFind_Type(_assemblyPtr, "System.Globalization.TextElementEnumerator");
    System::Globalization::TextInfo::_TextInfo = pFind_Type(_assemblyPtr, "System.Globalization.TextInfo");
    System::Globalization::ThaiBuddhistCalendar::_ThaiBuddhistCalendar = pFind_Type(_assemblyPtr, "System.Globalization.ThaiBuddhistCalendar");
    System::Globalization::NumberFormatInfo::_NumberFormatInfo = pFind_Type(_assemblyPtr, "System.Globalization.NumberFormatInfo");
    System::Globalization::NumberStyles::_NumberStyles = pFind_Type(_assemblyPtr, "System.Globalization.NumberStyles");
    System::Globalization::UmAlQuraCalendar::_UmAlQuraCalendar = pFind_Type(_assemblyPtr, "System.Globalization.UmAlQuraCalendar");
    System::Globalization::UnicodeCategory::_UnicodeCategory = pFind_Type(_assemblyPtr, "System.Globalization.UnicodeCategory");
    Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::_SafeHandleZeroOrMinusOneIsInvalid = pFind_Type(_assemblyPtr, "Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid");
    System::Text::Encoding::_Encoding = pFind_Type(_assemblyPtr, "System.Text.Encoding");
    System::Text::Encoder::_Encoder = pFind_Type(_assemblyPtr, "System.Text.Encoder");
    System::Text::Decoder::_Decoder = pFind_Type(_assemblyPtr, "System.Text.Decoder");
    System::Text::ASCIIEncoding::_ASCIIEncoding = pFind_Type(_assemblyPtr, "System.Text.ASCIIEncoding");
    System::Text::DecoderFallback::_DecoderFallback = pFind_Type(_assemblyPtr, "System.Text.DecoderFallback");
    System::Text::DecoderFallbackBuffer::_DecoderFallbackBuffer = pFind_Type(_assemblyPtr, "System.Text.DecoderFallbackBuffer");
    System::Text::DecoderExceptionFallback::_DecoderExceptionFallback = pFind_Type(_assemblyPtr, "System.Text.DecoderExceptionFallback");
    System::Text::DecoderExceptionFallbackBuffer::_DecoderExceptionFallbackBuffer = pFind_Type(_assemblyPtr, "System.Text.DecoderExceptionFallbackBuffer");
    System::Text::DecoderFallbackException::_DecoderFallbackException = pFind_Type(_assemblyPtr, "System.Text.DecoderFallbackException");
    System::Text::DecoderReplacementFallback::_DecoderReplacementFallback = pFind_Type(_assemblyPtr, "System.Text.DecoderReplacementFallback");
    System::Text::DecoderReplacementFallbackBuffer::_DecoderReplacementFallbackBuffer = pFind_Type(_assemblyPtr, "System.Text.DecoderReplacementFallbackBuffer");
    System::Text::EncoderFallback::_EncoderFallback = pFind_Type(_assemblyPtr, "System.Text.EncoderFallback");
    System::Text::EncoderFallbackBuffer::_EncoderFallbackBuffer = pFind_Type(_assemblyPtr, "System.Text.EncoderFallbackBuffer");
    System::Text::EncoderExceptionFallback::_EncoderExceptionFallback = pFind_Type(_assemblyPtr, "System.Text.EncoderExceptionFallback");
    System::Text::EncoderExceptionFallbackBuffer::_EncoderExceptionFallbackBuffer = pFind_Type(_assemblyPtr, "System.Text.EncoderExceptionFallbackBuffer");
    System::Text::EncoderFallbackException::_EncoderFallbackException = pFind_Type(_assemblyPtr, "System.Text.EncoderFallbackException");
    System::Text::EncoderReplacementFallback::_EncoderReplacementFallback = pFind_Type(_assemblyPtr, "System.Text.EncoderReplacementFallback");
    System::Text::EncoderReplacementFallbackBuffer::_EncoderReplacementFallbackBuffer = pFind_Type(_assemblyPtr, "System.Text.EncoderReplacementFallbackBuffer");
    System::Text::EncodingInfo::_EncodingInfo = pFind_Type(_assemblyPtr, "System.Text.EncodingInfo");
    System::Text::NormalizationForm::_NormalizationForm = pFind_Type(_assemblyPtr, "System.Text.NormalizationForm");
    System::Text::UnicodeEncoding::_UnicodeEncoding = pFind_Type(_assemblyPtr, "System.Text.UnicodeEncoding");
    System::Text::UTF7Encoding::_UTF7Encoding = pFind_Type(_assemblyPtr, "System.Text.UTF7Encoding");
    System::Text::UTF8Encoding::_UTF8Encoding = pFind_Type(_assemblyPtr, "System.Text.UTF8Encoding");
    System::Text::UTF32Encoding::_UTF32Encoding = pFind_Type(_assemblyPtr, "System.Text.UTF32Encoding");
    System::Resources::IResourceReader::_IResourceReader = pFind_Type(_assemblyPtr, "System.Resources.IResourceReader");
    System::Resources::IResourceWriter::_IResourceWriter = pFind_Type(_assemblyPtr, "System.Resources.IResourceWriter");
    System::Resources::MissingManifestResourceException::_MissingManifestResourceException = pFind_Type(_assemblyPtr, "System.Resources.MissingManifestResourceException");
    System::Resources::MissingSatelliteAssemblyException::_MissingSatelliteAssemblyException = pFind_Type(_assemblyPtr, "System.Resources.MissingSatelliteAssemblyException");
    System::Resources::NeutralResourcesLanguageAttribute::_NeutralResourcesLanguageAttribute = pFind_Type(_assemblyPtr, "System.Resources.NeutralResourcesLanguageAttribute");
    System::Resources::ResourceManager::_ResourceManager = pFind_Type(_assemblyPtr, "System.Resources.ResourceManager");
    System::Resources::ResourceReader::_ResourceReader = pFind_Type(_assemblyPtr, "System.Resources.ResourceReader");
    System::Resources::ResourceSet::_ResourceSet = pFind_Type(_assemblyPtr, "System.Resources.ResourceSet");
    System::Resources::ResourceWriter::_ResourceWriter = pFind_Type(_assemblyPtr, "System.Resources.ResourceWriter");
    System::Resources::SatelliteContractVersionAttribute::_SatelliteContractVersionAttribute = pFind_Type(_assemblyPtr, "System.Resources.SatelliteContractVersionAttribute");
    System::Resources::UltimateResourceFallbackLocation::_UltimateResourceFallbackLocation = pFind_Type(_assemblyPtr, "System.Resources.UltimateResourceFallbackLocation");
    Microsoft::Win32::Registry::_Registry = pFind_Type(_assemblyPtr, "Microsoft.Win32.Registry");
    Microsoft::Win32::RegistryHive::_RegistryHive = pFind_Type(_assemblyPtr, "Microsoft.Win32.RegistryHive");
    Microsoft::Win32::RegistryKey::_RegistryKey = pFind_Type(_assemblyPtr, "Microsoft.Win32.RegistryKey");
    Microsoft::Win32::RegistryValueOptions::_RegistryValueOptions = pFind_Type(_assemblyPtr, "Microsoft.Win32.RegistryValueOptions");
    Microsoft::Win32::RegistryKeyPermissionCheck::_RegistryKeyPermissionCheck = pFind_Type(_assemblyPtr, "Microsoft.Win32.RegistryKeyPermissionCheck");
    Microsoft::Win32::RegistryValueKind::_RegistryValueKind = pFind_Type(_assemblyPtr, "Microsoft.Win32.RegistryValueKind");
    Microsoft::Win32::SafeHandles::SafeFileHandle::_SafeFileHandle = pFind_Type(_assemblyPtr, "Microsoft.Win32.SafeHandles.SafeFileHandle");
    Microsoft::Win32::SafeHandles::SafeWaitHandle::_SafeWaitHandle = pFind_Type(_assemblyPtr, "Microsoft.Win32.SafeHandles.SafeWaitHandle");
    Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid::_SafeHandleMinusOneIsInvalid = pFind_Type(_assemblyPtr, "Microsoft.Win32.SafeHandles.SafeHandleMinusOneIsInvalid");
    System::Runtime::InteropServices::CriticalHandle::_CriticalHandle = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.CriticalHandle");
    Microsoft::Win32::SafeHandles::CriticalHandleZeroOrMinusOneIsInvalid::_CriticalHandleZeroOrMinusOneIsInvalid = pFind_Type(_assemblyPtr, "Microsoft.Win32.SafeHandles.CriticalHandleZeroOrMinusOneIsInvalid");
    Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid::_CriticalHandleMinusOneIsInvalid = pFind_Type(_assemblyPtr, "Microsoft.Win32.SafeHandles.CriticalHandleMinusOneIsInvalid");
    System::Security::ISecurityEncodable::_ISecurityEncodable = pFind_Type(_assemblyPtr, "System.Security.ISecurityEncodable");
    System::Security::ISecurityPolicyEncodable::_ISecurityPolicyEncodable = pFind_Type(_assemblyPtr, "System.Security.ISecurityPolicyEncodable");
    System::Security::Policy::IMembershipCondition::_IMembershipCondition = pFind_Type(_assemblyPtr, "System.Security.Policy.IMembershipCondition");
    System::Security::Policy::AllMembershipCondition::_AllMembershipCondition = pFind_Type(_assemblyPtr, "System.Security.Policy.AllMembershipCondition");
    System::Security::Policy::ApplicationDirectory::_ApplicationDirectory = pFind_Type(_assemblyPtr, "System.Security.Policy.ApplicationDirectory");
    System::Security::Policy::ApplicationDirectoryMembershipCondition::_ApplicationDirectoryMembershipCondition = pFind_Type(_assemblyPtr, "System.Security.Policy.ApplicationDirectoryMembershipCondition");
    System::Security::Policy::ApplicationSecurityInfo::_ApplicationSecurityInfo = pFind_Type(_assemblyPtr, "System.Security.Policy.ApplicationSecurityInfo");
    System::Security::Policy::ApplicationSecurityManager::_ApplicationSecurityManager = pFind_Type(_assemblyPtr, "System.Security.Policy.ApplicationSecurityManager");
    System::Security::Policy::ApplicationVersionMatch::_ApplicationVersionMatch = pFind_Type(_assemblyPtr, "System.Security.Policy.ApplicationVersionMatch");
    System::Security::Policy::ApplicationTrust::_ApplicationTrust = pFind_Type(_assemblyPtr, "System.Security.Policy.ApplicationTrust");
    System::Security::Policy::ApplicationTrustCollection::_ApplicationTrustCollection = pFind_Type(_assemblyPtr, "System.Security.Policy.ApplicationTrustCollection");
    System::Security::Policy::ApplicationTrustEnumerator::_ApplicationTrustEnumerator = pFind_Type(_assemblyPtr, "System.Security.Policy.ApplicationTrustEnumerator");
    System::Security::Policy::CodeGroup::_CodeGroup = pFind_Type(_assemblyPtr, "System.Security.Policy.CodeGroup");
    System::Security::Policy::Evidence::_Evidence = pFind_Type(_assemblyPtr, "System.Security.Policy.Evidence");
    System::Security::Policy::FileCodeGroup::_FileCodeGroup = pFind_Type(_assemblyPtr, "System.Security.Policy.FileCodeGroup");
    System::Security::Policy::FirstMatchCodeGroup::_FirstMatchCodeGroup = pFind_Type(_assemblyPtr, "System.Security.Policy.FirstMatchCodeGroup");
    System::Security::Policy::IIdentityPermissionFactory::_IIdentityPermissionFactory = pFind_Type(_assemblyPtr, "System.Security.Policy.IIdentityPermissionFactory");
    System::Security::Policy::IApplicationTrustManager::_IApplicationTrustManager = pFind_Type(_assemblyPtr, "System.Security.Policy.IApplicationTrustManager");
    System::Security::Policy::TrustManagerUIContext::_TrustManagerUIContext = pFind_Type(_assemblyPtr, "System.Security.Policy.TrustManagerUIContext");
    System::Security::Policy::TrustManagerContext::_TrustManagerContext = pFind_Type(_assemblyPtr, "System.Security.Policy.TrustManagerContext");
    System::Security::Policy::CodeConnectAccess::_CodeConnectAccess = pFind_Type(_assemblyPtr, "System.Security.Policy.CodeConnectAccess");
    System::Security::Policy::NetCodeGroup::_NetCodeGroup = pFind_Type(_assemblyPtr, "System.Security.Policy.NetCodeGroup");
    System::Security::Policy::PermissionRequestEvidence::_PermissionRequestEvidence = pFind_Type(_assemblyPtr, "System.Security.Policy.PermissionRequestEvidence");
    System::Security::Policy::PolicyException::_PolicyException = pFind_Type(_assemblyPtr, "System.Security.Policy.PolicyException");
    System::Security::Policy::PolicyLevel::_PolicyLevel = pFind_Type(_assemblyPtr, "System.Security.Policy.PolicyLevel");
    System::Security::Policy::PolicyStatementAttribute::_PolicyStatementAttribute = pFind_Type(_assemblyPtr, "System.Security.Policy.PolicyStatementAttribute");
    System::Security::Policy::PolicyStatement::_PolicyStatement = pFind_Type(_assemblyPtr, "System.Security.Policy.PolicyStatement");
    System::Security::Policy::Site::_Site = pFind_Type(_assemblyPtr, "System.Security.Policy.Site");
    System::Security::Policy::SiteMembershipCondition::_SiteMembershipCondition = pFind_Type(_assemblyPtr, "System.Security.Policy.SiteMembershipCondition");
    System::Security::Policy::StrongName::_StrongName = pFind_Type(_assemblyPtr, "System.Security.Policy.StrongName");
    System::Security::Policy::StrongNameMembershipCondition::_StrongNameMembershipCondition = pFind_Type(_assemblyPtr, "System.Security.Policy.StrongNameMembershipCondition");
    System::Security::Policy::UnionCodeGroup::_UnionCodeGroup = pFind_Type(_assemblyPtr, "System.Security.Policy.UnionCodeGroup");
    System::Security::Policy::Url::_Url = pFind_Type(_assemblyPtr, "System.Security.Policy.Url");
    System::Security::Policy::UrlMembershipCondition::_UrlMembershipCondition = pFind_Type(_assemblyPtr, "System.Security.Policy.UrlMembershipCondition");
    System::Security::Policy::Zone::_Zone = pFind_Type(_assemblyPtr, "System.Security.Policy.Zone");
    System::Security::Policy::ZoneMembershipCondition::_ZoneMembershipCondition = pFind_Type(_assemblyPtr, "System.Security.Policy.ZoneMembershipCondition");
    System::Security::Policy::GacInstalled::_GacInstalled = pFind_Type(_assemblyPtr, "System.Security.Policy.GacInstalled");
    System::Security::Policy::GacMembershipCondition::_GacMembershipCondition = pFind_Type(_assemblyPtr, "System.Security.Policy.GacMembershipCondition");
    System::Security::Policy::Hash::_Hash = pFind_Type(_assemblyPtr, "System.Security.Policy.Hash");
    System::Security::Policy::HashMembershipCondition::_HashMembershipCondition = pFind_Type(_assemblyPtr, "System.Security.Policy.HashMembershipCondition");
    System::Security::Policy::Publisher::_Publisher = pFind_Type(_assemblyPtr, "System.Security.Policy.Publisher");
    System::Security::Policy::PublisherMembershipCondition::_PublisherMembershipCondition = pFind_Type(_assemblyPtr, "System.Security.Policy.PublisherMembershipCondition");
    System::Security::Principal::IIdentity::_IIdentity = pFind_Type(_assemblyPtr, "System.Security.Principal.IIdentity");
    System::Security::Principal::GenericIdentity::_GenericIdentity = pFind_Type(_assemblyPtr, "System.Security.Principal.GenericIdentity");
    System::Security::Principal::IPrincipal::_IPrincipal = pFind_Type(_assemblyPtr, "System.Security.Principal.IPrincipal");
    System::Security::Principal::GenericPrincipal::_GenericPrincipal = pFind_Type(_assemblyPtr, "System.Security.Principal.GenericPrincipal");
    System::Security::Principal::PrincipalPolicy::_PrincipalPolicy = pFind_Type(_assemblyPtr, "System.Security.Principal.PrincipalPolicy");
    System::Security::Principal::WindowsAccountType::_WindowsAccountType = pFind_Type(_assemblyPtr, "System.Security.Principal.WindowsAccountType");
    System::Security::Principal::TokenImpersonationLevel::_TokenImpersonationLevel = pFind_Type(_assemblyPtr, "System.Security.Principal.TokenImpersonationLevel");
    System::Security::Principal::TokenAccessLevels::_TokenAccessLevels = pFind_Type(_assemblyPtr, "System.Security.Principal.TokenAccessLevels");
    System::Security::Principal::WindowsIdentity::_WindowsIdentity = pFind_Type(_assemblyPtr, "System.Security.Principal.WindowsIdentity");
    System::Security::Principal::WindowsImpersonationContext::_WindowsImpersonationContext = pFind_Type(_assemblyPtr, "System.Security.Principal.WindowsImpersonationContext");
    System::Security::Principal::WindowsBuiltInRole::_WindowsBuiltInRole = pFind_Type(_assemblyPtr, "System.Security.Principal.WindowsBuiltInRole");
    System::Security::Principal::WindowsPrincipal::_WindowsPrincipal = pFind_Type(_assemblyPtr, "System.Security.Principal.WindowsPrincipal");
    System::Runtime::ConstrainedExecution::Consistency::_Consistency = pFind_Type(_assemblyPtr, "System.Runtime.ConstrainedExecution.Consistency");
    System::Runtime::ConstrainedExecution::Cer::_Cer = pFind_Type(_assemblyPtr, "System.Runtime.ConstrainedExecution.Cer");
    System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::_ReliabilityContractAttribute = pFind_Type(_assemblyPtr, "System.Runtime.ConstrainedExecution.ReliabilityContractAttribute");
    System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute::_PrePrepareMethodAttribute = pFind_Type(_assemblyPtr, "System.Runtime.ConstrainedExecution.PrePrepareMethodAttribute");
    System::Runtime::InteropServices::ArrayWithOffset::_ArrayWithOffset = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ArrayWithOffset");
    System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute::_UnmanagedFunctionPointerAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute");
    System::Runtime::InteropServices::AllowReversePInvokeCallsAttribute::_AllowReversePInvokeCallsAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.AllowReversePInvokeCallsAttribute");
    System::Runtime::InteropServices::DispIdAttribute::_DispIdAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.DispIdAttribute");
    System::Runtime::InteropServices::ComInterfaceType::_ComInterfaceType = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComInterfaceType");
    System::Runtime::InteropServices::InterfaceTypeAttribute::_InterfaceTypeAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.InterfaceTypeAttribute");
    System::Runtime::InteropServices::ComDefaultInterfaceAttribute::_ComDefaultInterfaceAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComDefaultInterfaceAttribute");
    System::Runtime::InteropServices::ClassInterfaceType::_ClassInterfaceType = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ClassInterfaceType");
    System::Runtime::InteropServices::ClassInterfaceAttribute::_ClassInterfaceAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ClassInterfaceAttribute");
    System::Runtime::InteropServices::ComVisibleAttribute::_ComVisibleAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComVisibleAttribute");
    System::Runtime::InteropServices::TypeLibImportClassAttribute::_TypeLibImportClassAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.TypeLibImportClassAttribute");
    System::Runtime::InteropServices::LCIDConversionAttribute::_LCIDConversionAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.LCIDConversionAttribute");
    System::Runtime::InteropServices::ComRegisterFunctionAttribute::_ComRegisterFunctionAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComRegisterFunctionAttribute");
    System::Runtime::InteropServices::ComUnregisterFunctionAttribute::_ComUnregisterFunctionAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComUnregisterFunctionAttribute");
    System::Runtime::InteropServices::ProgIdAttribute::_ProgIdAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ProgIdAttribute");
    System::Runtime::InteropServices::ImportedFromTypeLibAttribute::_ImportedFromTypeLibAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ImportedFromTypeLibAttribute");
    System::Runtime::InteropServices::IDispatchImplType::_IDispatchImplType = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.IDispatchImplType");
    System::Runtime::InteropServices::IDispatchImplAttribute::_IDispatchImplAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.IDispatchImplAttribute");
    System::Runtime::InteropServices::ComSourceInterfacesAttribute::_ComSourceInterfacesAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComSourceInterfacesAttribute");
    System::Runtime::InteropServices::ComConversionLossAttribute::_ComConversionLossAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComConversionLossAttribute");
    System::Runtime::InteropServices::TypeLibTypeFlags::_TypeLibTypeFlags = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.TypeLibTypeFlags");
    System::Runtime::InteropServices::TypeLibFuncFlags::_TypeLibFuncFlags = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.TypeLibFuncFlags");
    System::Runtime::InteropServices::TypeLibVarFlags::_TypeLibVarFlags = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.TypeLibVarFlags");
    System::Runtime::InteropServices::TypeLibTypeAttribute::_TypeLibTypeAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.TypeLibTypeAttribute");
    System::Runtime::InteropServices::TypeLibFuncAttribute::_TypeLibFuncAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.TypeLibFuncAttribute");
    System::Runtime::InteropServices::TypeLibVarAttribute::_TypeLibVarAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.TypeLibVarAttribute");
    System::Runtime::InteropServices::VarEnum::_VarEnum = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.VarEnum");
    System::Runtime::InteropServices::UnmanagedType::_UnmanagedType = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.UnmanagedType");
    System::Runtime::InteropServices::MarshalAsAttribute::_MarshalAsAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.MarshalAsAttribute");
    System::Runtime::InteropServices::ComImportAttribute::_ComImportAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComImportAttribute");
    System::Runtime::InteropServices::GuidAttribute::_GuidAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.GuidAttribute");
    System::Runtime::InteropServices::PreserveSigAttribute::_PreserveSigAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.PreserveSigAttribute");
    System::Runtime::InteropServices::InAttribute::_InAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.InAttribute");
    System::Runtime::InteropServices::OutAttribute::_OutAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.OutAttribute");
    System::Runtime::InteropServices::OptionalAttribute::_OptionalAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.OptionalAttribute");
    System::Runtime::InteropServices::DllImportAttribute::_DllImportAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.DllImportAttribute");
    System::Runtime::InteropServices::StructLayoutAttribute::_StructLayoutAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.StructLayoutAttribute");
    System::Runtime::InteropServices::FieldOffsetAttribute::_FieldOffsetAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.FieldOffsetAttribute");
    System::Runtime::InteropServices::ComAliasNameAttribute::_ComAliasNameAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComAliasNameAttribute");
    System::Runtime::InteropServices::AutomationProxyAttribute::_AutomationProxyAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.AutomationProxyAttribute");
    System::Runtime::InteropServices::PrimaryInteropAssemblyAttribute::_PrimaryInteropAssemblyAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.PrimaryInteropAssemblyAttribute");
    System::Runtime::InteropServices::CoClassAttribute::_CoClassAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.CoClassAttribute");
    System::Runtime::InteropServices::ComEventInterfaceAttribute::_ComEventInterfaceAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComEventInterfaceAttribute");
    System::Runtime::InteropServices::TypeLibVersionAttribute::_TypeLibVersionAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.TypeLibVersionAttribute");
    System::Runtime::InteropServices::ComCompatibleVersionAttribute::_ComCompatibleVersionAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComCompatibleVersionAttribute");
    System::Runtime::InteropServices::BestFitMappingAttribute::_BestFitMappingAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.BestFitMappingAttribute");
    System::Runtime::InteropServices::DefaultCharSetAttribute::_DefaultCharSetAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.DefaultCharSetAttribute");
    System::Runtime::InteropServices::SetWin32ContextInIDispatchAttribute::_SetWin32ContextInIDispatchAttribute = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.SetWin32ContextInIDispatchAttribute");
    System::Runtime::InteropServices::CallingConvention::_CallingConvention = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.CallingConvention");
    System::Runtime::InteropServices::CharSet::_CharSet = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.CharSet");
    System::Runtime::InteropServices::ExternalException::_ExternalException = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ExternalException");
    System::Runtime::InteropServices::COMException::_COMException = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.COMException");
    System::Runtime::InteropServices::GCHandleType::_GCHandleType = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.GCHandleType");
    System::Runtime::InteropServices::GCHandle::_GCHandle = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.GCHandle");
    System::Runtime::InteropServices::HandleRef::_HandleRef = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.HandleRef");
    System::Runtime::InteropServices::ICustomMarshaler::_ICustomMarshaler = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ICustomMarshaler");
    System::Runtime::InteropServices::InvalidOleVariantTypeException::_InvalidOleVariantTypeException = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.InvalidOleVariantTypeException");
    System::Runtime::InteropServices::LayoutKind::_LayoutKind = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.LayoutKind");
    System::Runtime::InteropServices::Marshal::_Marshal = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.Marshal");
    System::Runtime::InteropServices::ITypeLibImporterNotifySink::_ITypeLibImporterNotifySink = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ITypeLibImporterNotifySink");
    System::Runtime::InteropServices::MarshalDirectiveException::_MarshalDirectiveException = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.MarshalDirectiveException");
    System::Runtime::InteropServices::RuntimeEnvironment::_RuntimeEnvironment = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.RuntimeEnvironment");
    System::Runtime::InteropServices::SEHException::_SEHException = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.SEHException");
    System::Runtime::InteropServices::BStrWrapper::_BStrWrapper = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.BStrWrapper");
    System::Runtime::InteropServices::ComMemberType::_ComMemberType = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComMemberType");
    System::Runtime::InteropServices::CurrencyWrapper::_CurrencyWrapper = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.CurrencyWrapper");
    System::Runtime::InteropServices::DispatchWrapper::_DispatchWrapper = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.DispatchWrapper");
    System::Runtime::InteropServices::ErrorWrapper::_ErrorWrapper = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ErrorWrapper");
    System::Runtime::InteropServices::ExtensibleClassFactory::_ExtensibleClassFactory = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ExtensibleClassFactory");
    System::Runtime::InteropServices::ICustomAdapter::_ICustomAdapter = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ICustomAdapter");
    System::Runtime::InteropServices::ICustomFactory::_ICustomFactory = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ICustomFactory");
    System::Runtime::InteropServices::InvalidComObjectException::_InvalidComObjectException = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.InvalidComObjectException");
    System::Runtime::InteropServices::AssemblyRegistrationFlags::_AssemblyRegistrationFlags = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.AssemblyRegistrationFlags");
    System::Runtime::InteropServices::IRegistrationServices::_IRegistrationServices = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.IRegistrationServices");
    System::Runtime::InteropServices::TypeLibImporterFlags::_TypeLibImporterFlags = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.TypeLibImporterFlags");
    System::Runtime::InteropServices::TypeLibExporterFlags::_TypeLibExporterFlags = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.TypeLibExporterFlags");
    System::Runtime::InteropServices::ImporterEventKind::_ImporterEventKind = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ImporterEventKind");
    System::Runtime::InteropServices::ExporterEventKind::_ExporterEventKind = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ExporterEventKind");
    System::Runtime::InteropServices::ITypeLibExporterNotifySink::_ITypeLibExporterNotifySink = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ITypeLibExporterNotifySink");
    System::Runtime::InteropServices::ITypeLibConverter::_ITypeLibConverter = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ITypeLibConverter");
    System::Runtime::InteropServices::ITypeLibExporterNameProvider::_ITypeLibExporterNameProvider = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ITypeLibExporterNameProvider");
    System::Runtime::InteropServices::ObjectCreationDelegate::_ObjectCreationDelegate = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ObjectCreationDelegate");
    System::Runtime::InteropServices::RegistrationClassContext::_RegistrationClassContext = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.RegistrationClassContext");
    System::Runtime::InteropServices::RegistrationConnectionType::_RegistrationConnectionType = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.RegistrationConnectionType");
    System::Runtime::InteropServices::RegistrationServices::_RegistrationServices = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.RegistrationServices");
    System::Runtime::InteropServices::SafeArrayRankMismatchException::_SafeArrayRankMismatchException = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.SafeArrayRankMismatchException");
    System::Runtime::InteropServices::SafeArrayTypeMismatchException::_SafeArrayTypeMismatchException = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.SafeArrayTypeMismatchException");
    System::Runtime::InteropServices::TypeLibConverter::_TypeLibConverter = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.TypeLibConverter");
    System::Runtime::InteropServices::BIND_OPTS::_BIND_OPTS = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.BIND_OPTS");
    System::Runtime::InteropServices::UCOMIBindCtx::_UCOMIBindCtx = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.UCOMIBindCtx");
    System::Runtime::InteropServices::UCOMIConnectionPointContainer::_UCOMIConnectionPointContainer = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.UCOMIConnectionPointContainer");
    System::Runtime::InteropServices::UCOMIConnectionPoint::_UCOMIConnectionPoint = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.UCOMIConnectionPoint");
    System::Runtime::InteropServices::UCOMIEnumMoniker::_UCOMIEnumMoniker = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.UCOMIEnumMoniker");
    System::Runtime::InteropServices::CONNECTDATA::_CONNECTDATA = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.CONNECTDATA");
    System::Runtime::InteropServices::UCOMIEnumConnections::_UCOMIEnumConnections = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.UCOMIEnumConnections");
    System::Runtime::InteropServices::UCOMIEnumConnectionPoints::_UCOMIEnumConnectionPoints = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.UCOMIEnumConnectionPoints");
    System::Runtime::InteropServices::UCOMIEnumString::_UCOMIEnumString = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.UCOMIEnumString");
    System::Runtime::InteropServices::UCOMIEnumVARIANT::_UCOMIEnumVARIANT = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.UCOMIEnumVARIANT");
    System::Runtime::InteropServices::FILETIME::_FILETIME = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.FILETIME");
    System::Runtime::InteropServices::UCOMIMoniker::_UCOMIMoniker = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.UCOMIMoniker");
    System::Runtime::InteropServices::UCOMIPersistFile::_UCOMIPersistFile = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.UCOMIPersistFile");
    System::Runtime::InteropServices::UCOMIRunningObjectTable::_UCOMIRunningObjectTable = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.UCOMIRunningObjectTable");
    System::Runtime::InteropServices::STATSTG::_STATSTG = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.STATSTG");
    System::Runtime::InteropServices::UCOMIStream::_UCOMIStream = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.UCOMIStream");
    System::Runtime::InteropServices::DESCKIND::_DESCKIND = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.DESCKIND");
    System::Runtime::InteropServices::BINDPTR::_BINDPTR = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.BINDPTR");
    System::Runtime::InteropServices::UCOMITypeComp::_UCOMITypeComp = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.UCOMITypeComp");
    System::Runtime::InteropServices::TYPEKIND::_TYPEKIND = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.TYPEKIND");
    System::Runtime::InteropServices::TYPEFLAGS::_TYPEFLAGS = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.TYPEFLAGS");
    System::Runtime::InteropServices::IMPLTYPEFLAGS::_IMPLTYPEFLAGS = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.IMPLTYPEFLAGS");
    System::Runtime::InteropServices::TYPEATTR::_TYPEATTR = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.TYPEATTR");
    System::Runtime::InteropServices::FUNCDESC::_FUNCDESC = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.FUNCDESC");
    System::Runtime::InteropServices::IDLFLAG::_IDLFLAG = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.IDLFLAG");
    System::Runtime::InteropServices::IDLDESC::_IDLDESC = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.IDLDESC");
    System::Runtime::InteropServices::PARAMFLAG::_PARAMFLAG = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.PARAMFLAG");
    System::Runtime::InteropServices::PARAMDESC::_PARAMDESC = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.PARAMDESC");
    System::Runtime::InteropServices::TYPEDESC::_TYPEDESC = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.TYPEDESC");
    System::Runtime::InteropServices::ELEMDESC::_ELEMDESC = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ELEMDESC");
    System::Runtime::InteropServices::VARDESC::_VARDESC = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.VARDESC");
    System::Runtime::InteropServices::DISPPARAMS::_DISPPARAMS = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.DISPPARAMS");
    System::Runtime::InteropServices::EXCEPINFO::_EXCEPINFO = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.EXCEPINFO");
    System::Runtime::InteropServices::FUNCKIND::_FUNCKIND = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.FUNCKIND");
    System::Runtime::InteropServices::INVOKEKIND::_INVOKEKIND = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.INVOKEKIND");
    System::Runtime::InteropServices::CALLCONV::_CALLCONV = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.CALLCONV");
    System::Runtime::InteropServices::FUNCFLAGS::_FUNCFLAGS = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.FUNCFLAGS");
    System::Runtime::InteropServices::VARFLAGS::_VARFLAGS = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.VARFLAGS");
    System::Runtime::InteropServices::UCOMITypeInfo::_UCOMITypeInfo = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.UCOMITypeInfo");
    System::Runtime::InteropServices::SYSKIND::_SYSKIND = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.SYSKIND");
    System::Runtime::InteropServices::LIBFLAGS::_LIBFLAGS = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.LIBFLAGS");
    System::Runtime::InteropServices::TYPELIBATTR::_TYPELIBATTR = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.TYPELIBATTR");
    System::Runtime::InteropServices::UCOMITypeLib::_UCOMITypeLib = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.UCOMITypeLib");
    System::Runtime::InteropServices::UnknownWrapper::_UnknownWrapper = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.UnknownWrapper");
    System::Runtime::InteropServices::VariantWrapper::_VariantWrapper = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.VariantWrapper");
    System::Runtime::InteropServices::ComTypes::BIND_OPTS::_BIND_OPTS = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.BIND_OPTS");
    System::Runtime::InteropServices::ComTypes::IBindCtx::_IBindCtx = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.IBindCtx");
    System::Runtime::InteropServices::ComTypes::IConnectionPointContainer::_IConnectionPointContainer = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.IConnectionPointContainer");
    System::Runtime::InteropServices::ComTypes::IConnectionPoint::_IConnectionPoint = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.IConnectionPoint");
    System::Runtime::InteropServices::ComTypes::IEnumMoniker::_IEnumMoniker = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.IEnumMoniker");
    System::Runtime::InteropServices::ComTypes::CONNECTDATA::_CONNECTDATA = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.CONNECTDATA");
    System::Runtime::InteropServices::ComTypes::IEnumConnections::_IEnumConnections = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.IEnumConnections");
    System::Runtime::InteropServices::ComTypes::IEnumConnectionPoints::_IEnumConnectionPoints = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.IEnumConnectionPoints");
    System::Runtime::InteropServices::ComTypes::IEnumString::_IEnumString = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.IEnumString");
    System::Runtime::InteropServices::ComTypes::IEnumVARIANT::_IEnumVARIANT = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.IEnumVARIANT");
    System::Runtime::InteropServices::ComTypes::FILETIME::_FILETIME = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.FILETIME");
    System::Runtime::InteropServices::ComTypes::IMoniker::_IMoniker = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.IMoniker");
    System::Runtime::InteropServices::ComTypes::IPersistFile::_IPersistFile = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.IPersistFile");
    System::Runtime::InteropServices::ComTypes::IRunningObjectTable::_IRunningObjectTable = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.IRunningObjectTable");
    System::Runtime::InteropServices::ComTypes::STATSTG::_STATSTG = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.STATSTG");
    System::Runtime::InteropServices::ComTypes::IStream::_IStream = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.IStream");
    System::Runtime::InteropServices::ComTypes::DESCKIND::_DESCKIND = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.DESCKIND");
    System::Runtime::InteropServices::ComTypes::BINDPTR::_BINDPTR = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.BINDPTR");
    System::Runtime::InteropServices::ComTypes::ITypeComp::_ITypeComp = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.ITypeComp");
    System::Runtime::InteropServices::ComTypes::TYPEKIND::_TYPEKIND = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.TYPEKIND");
    System::Runtime::InteropServices::ComTypes::TYPEFLAGS::_TYPEFLAGS = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.TYPEFLAGS");
    System::Runtime::InteropServices::ComTypes::IMPLTYPEFLAGS::_IMPLTYPEFLAGS = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.IMPLTYPEFLAGS");
    System::Runtime::InteropServices::ComTypes::TYPEATTR::_TYPEATTR = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.TYPEATTR");
    System::Runtime::InteropServices::ComTypes::FUNCDESC::_FUNCDESC = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.FUNCDESC");
    System::Runtime::InteropServices::ComTypes::IDLFLAG::_IDLFLAG = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.IDLFLAG");
    System::Runtime::InteropServices::ComTypes::IDLDESC::_IDLDESC = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.IDLDESC");
    System::Runtime::InteropServices::ComTypes::PARAMFLAG::_PARAMFLAG = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.PARAMFLAG");
    System::Runtime::InteropServices::ComTypes::PARAMDESC::_PARAMDESC = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.PARAMDESC");
    System::Runtime::InteropServices::ComTypes::TYPEDESC::_TYPEDESC = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.TYPEDESC");
    System::Runtime::InteropServices::ComTypes::ELEMDESC::_ELEMDESC = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.ELEMDESC");
    System::Runtime::InteropServices::ComTypes::VARKIND::_VARKIND = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.VARKIND");
    System::Runtime::InteropServices::ComTypes::VARDESC::_VARDESC = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.VARDESC");
    System::Runtime::InteropServices::ComTypes::DISPPARAMS::_DISPPARAMS = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.DISPPARAMS");
    System::Runtime::InteropServices::ComTypes::EXCEPINFO::_EXCEPINFO = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.EXCEPINFO");
    System::Runtime::InteropServices::ComTypes::FUNCKIND::_FUNCKIND = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.FUNCKIND");
    System::Runtime::InteropServices::ComTypes::INVOKEKIND::_INVOKEKIND = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.INVOKEKIND");
    System::Runtime::InteropServices::ComTypes::CALLCONV::_CALLCONV = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.CALLCONV");
    System::Runtime::InteropServices::ComTypes::FUNCFLAGS::_FUNCFLAGS = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.FUNCFLAGS");
    System::Runtime::InteropServices::ComTypes::VARFLAGS::_VARFLAGS = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.VARFLAGS");
    System::Runtime::InteropServices::ComTypes::ITypeInfo::_ITypeInfo = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.ITypeInfo");
    System::Runtime::InteropServices::ComTypes::SYSKIND::_SYSKIND = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.SYSKIND");
    System::Runtime::InteropServices::ComTypes::LIBFLAGS::_LIBFLAGS = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.LIBFLAGS");
    System::Runtime::InteropServices::ComTypes::TYPELIBATTR::_TYPELIBATTR = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.TYPELIBATTR");
    System::Runtime::InteropServices::ComTypes::ITypeLib::_ITypeLib = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.ITypeLib");
    System::Runtime::InteropServices::ComTypes::ITypeLib2::_ITypeLib2 = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.ITypeLib2");
    System::Runtime::InteropServices::ComTypes::ITypeInfo2::_ITypeInfo2 = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.ComTypes.ITypeInfo2");
    System::Runtime::InteropServices::Expando::IExpando::_IExpando = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices.Expando.IExpando");
    System::IO::Stream::_Stream = pFind_Type(_assemblyPtr, "System.IO.Stream");
    System::IO::BinaryReader::_BinaryReader = pFind_Type(_assemblyPtr, "System.IO.BinaryReader");
    System::IO::BinaryWriter::_BinaryWriter = pFind_Type(_assemblyPtr, "System.IO.BinaryWriter");
    System::IO::BufferedStream::_BufferedStream = pFind_Type(_assemblyPtr, "System.IO.BufferedStream");
    System::IO::Directory::_Directory = pFind_Type(_assemblyPtr, "System.IO.Directory");
    System::IO::FileSystemInfo::_FileSystemInfo = pFind_Type(_assemblyPtr, "System.IO.FileSystemInfo");
    System::IO::DirectoryInfo::_DirectoryInfo = pFind_Type(_assemblyPtr, "System.IO.DirectoryInfo");
    System::IO::SearchOption::_SearchOption = pFind_Type(_assemblyPtr, "System.IO.SearchOption");
    System::IO::IOException::_IOException = pFind_Type(_assemblyPtr, "System.IO.IOException");
    System::IO::DirectoryNotFoundException::_DirectoryNotFoundException = pFind_Type(_assemblyPtr, "System.IO.DirectoryNotFoundException");
    System::IO::DriveType::_DriveType = pFind_Type(_assemblyPtr, "System.IO.DriveType");
    System::IO::DriveInfo::_DriveInfo = pFind_Type(_assemblyPtr, "System.IO.DriveInfo");
    System::IO::DriveNotFoundException::_DriveNotFoundException = pFind_Type(_assemblyPtr, "System.IO.DriveNotFoundException");
    System::IO::EndOfStreamException::_EndOfStreamException = pFind_Type(_assemblyPtr, "System.IO.EndOfStreamException");
    System::IO::File::_File = pFind_Type(_assemblyPtr, "System.IO.File");
    System::IO::FileAccess::_FileAccess = pFind_Type(_assemblyPtr, "System.IO.FileAccess");
    System::IO::FileInfo::_FileInfo = pFind_Type(_assemblyPtr, "System.IO.FileInfo");
    System::IO::FileLoadException::_FileLoadException = pFind_Type(_assemblyPtr, "System.IO.FileLoadException");
    System::IO::FileMode::_FileMode = pFind_Type(_assemblyPtr, "System.IO.FileMode");
    System::IO::FileNotFoundException::_FileNotFoundException = pFind_Type(_assemblyPtr, "System.IO.FileNotFoundException");
    System::IO::FileOptions::_FileOptions = pFind_Type(_assemblyPtr, "System.IO.FileOptions");
    System::IO::FileShare::_FileShare = pFind_Type(_assemblyPtr, "System.IO.FileShare");
    System::IO::FileStream::_FileStream = pFind_Type(_assemblyPtr, "System.IO.FileStream");
    System::IO::FileAttributes::_FileAttributes = pFind_Type(_assemblyPtr, "System.IO.FileAttributes");
    System::IO::MemoryStream::_MemoryStream = pFind_Type(_assemblyPtr, "System.IO.MemoryStream");
    System::IO::Path::_Path = pFind_Type(_assemblyPtr, "System.IO.Path");
    System::IO::PathTooLongException::_PathTooLongException = pFind_Type(_assemblyPtr, "System.IO.PathTooLongException");
    System::IO::UnmanagedMemoryStream::_UnmanagedMemoryStream = pFind_Type(_assemblyPtr, "System.IO.UnmanagedMemoryStream");
    System::IO::SeekOrigin::_SeekOrigin = pFind_Type(_assemblyPtr, "System.IO.SeekOrigin");
    System::IO::TextReader::_TextReader = pFind_Type(_assemblyPtr, "System.IO.TextReader");
    System::IO::StreamReader::_StreamReader = pFind_Type(_assemblyPtr, "System.IO.StreamReader");
    System::IO::TextWriter::_TextWriter = pFind_Type(_assemblyPtr, "System.IO.TextWriter");
    System::IO::StreamWriter::_StreamWriter = pFind_Type(_assemblyPtr, "System.IO.StreamWriter");
    System::IO::StringReader::_StringReader = pFind_Type(_assemblyPtr, "System.IO.StringReader");
    System::IO::StringWriter::_StringWriter = pFind_Type(_assemblyPtr, "System.IO.StringWriter");
    System::Runtime::CompilerServices::AccessedThroughPropertyAttribute::_AccessedThroughPropertyAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.AccessedThroughPropertyAttribute");
    System::Runtime::CompilerServices::CallConvCdecl::_CallConvCdecl = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.CallConvCdecl");
    System::Runtime::CompilerServices::CallConvStdcall::_CallConvStdcall = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.CallConvStdcall");
    System::Runtime::CompilerServices::CallConvThiscall::_CallConvThiscall = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.CallConvThiscall");
    System::Runtime::CompilerServices::CallConvFastcall::_CallConvFastcall = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.CallConvFastcall");
    System::Runtime::CompilerServices::RuntimeHelpers::_RuntimeHelpers = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.RuntimeHelpers");
    System::Runtime::CompilerServices::CompilerGeneratedAttribute::_CompilerGeneratedAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.CompilerGeneratedAttribute");
    System::Runtime::CompilerServices::CustomConstantAttribute::_CustomConstantAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.CustomConstantAttribute");
    System::Runtime::CompilerServices::DateTimeConstantAttribute::_DateTimeConstantAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.DateTimeConstantAttribute");
    System::Runtime::CompilerServices::DiscardableAttribute::_DiscardableAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.DiscardableAttribute");
    System::Runtime::CompilerServices::DecimalConstantAttribute::_DecimalConstantAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.DecimalConstantAttribute");
    System::Runtime::CompilerServices::CompilationRelaxations::_CompilationRelaxations = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.CompilationRelaxations");
    System::Runtime::CompilerServices::CompilationRelaxationsAttribute::_CompilationRelaxationsAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.CompilationRelaxationsAttribute");
    System::Runtime::CompilerServices::CompilerGlobalScopeAttribute::_CompilerGlobalScopeAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.CompilerGlobalScopeAttribute");
    System::Runtime::CompilerServices::FixedBufferAttribute::_FixedBufferAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.FixedBufferAttribute");
    System::Runtime::CompilerServices::IndexerNameAttribute::_IndexerNameAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.IndexerNameAttribute");
    System::Runtime::CompilerServices::InternalsVisibleToAttribute::_InternalsVisibleToAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.InternalsVisibleToAttribute");
    System::Runtime::CompilerServices::IsVolatile::_IsVolatile = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.IsVolatile");
    System::Runtime::CompilerServices::MethodImplOptions::_MethodImplOptions = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.MethodImplOptions");
    System::Runtime::CompilerServices::MethodCodeType::_MethodCodeType = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.MethodCodeType");
    System::Runtime::CompilerServices::MethodImplAttribute::_MethodImplAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.MethodImplAttribute");
    System::Runtime::CompilerServices::FixedAddressValueTypeAttribute::_FixedAddressValueTypeAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.FixedAddressValueTypeAttribute");
    System::Runtime::CompilerServices::UnsafeValueTypeAttribute::_UnsafeValueTypeAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.UnsafeValueTypeAttribute");
    System::Runtime::CompilerServices::RequiredAttributeAttribute::_RequiredAttributeAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.RequiredAttributeAttribute");
    System::Runtime::CompilerServices::LoadHint::_LoadHint = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.LoadHint");
    System::Runtime::CompilerServices::DefaultDependencyAttribute::_DefaultDependencyAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.DefaultDependencyAttribute");
    System::Runtime::CompilerServices::DependencyAttribute::_DependencyAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.DependencyAttribute");
    System::Runtime::CompilerServices::CompilerMarshalOverride::_CompilerMarshalOverride = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.CompilerMarshalOverride");
    System::Runtime::CompilerServices::HasCopySemanticsAttribute::_HasCopySemanticsAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.HasCopySemanticsAttribute");
    System::Runtime::CompilerServices::IsBoxed::_IsBoxed = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.IsBoxed");
    System::Runtime::CompilerServices::IsByValue::_IsByValue = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.IsByValue");
    System::Runtime::CompilerServices::IsConst::_IsConst = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.IsConst");
    System::Runtime::CompilerServices::IsExplicitlyDereferenced::_IsExplicitlyDereferenced = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.IsExplicitlyDereferenced");
    System::Runtime::CompilerServices::IsImplicitlyDereferenced::_IsImplicitlyDereferenced = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.IsImplicitlyDereferenced");
    System::Runtime::CompilerServices::IsJitIntrinsic::_IsJitIntrinsic = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.IsJitIntrinsic");
    System::Runtime::CompilerServices::IsLong::_IsLong = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.IsLong");
    System::Runtime::CompilerServices::IsPinned::_IsPinned = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.IsPinned");
    System::Runtime::CompilerServices::IsSignUnspecifiedByte::_IsSignUnspecifiedByte = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.IsSignUnspecifiedByte");
    System::Runtime::CompilerServices::IsUdtReturn::_IsUdtReturn = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.IsUdtReturn");
    System::Runtime::CompilerServices::ScopelessEnumAttribute::_ScopelessEnumAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.ScopelessEnumAttribute");
    System::Runtime::CompilerServices::SpecialNameAttribute::_SpecialNameAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.SpecialNameAttribute");
    System::Runtime::CompilerServices::IsCopyConstructed::_IsCopyConstructed = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.IsCopyConstructed");
    System::Runtime::CompilerServices::SuppressIldasmAttribute::_SuppressIldasmAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.SuppressIldasmAttribute");
    System::Runtime::CompilerServices::NativeCppClassAttribute::_NativeCppClassAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.NativeCppClassAttribute");
    System::Runtime::CompilerServices::TypeForwardedToAttribute::_TypeForwardedToAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.TypeForwardedToAttribute");
    System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::_RuntimeCompatibilityAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.RuntimeCompatibilityAttribute");
    System::Runtime::CompilerServices::RuntimeWrappedException::_RuntimeWrappedException = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.RuntimeWrappedException");
    System::Runtime::CompilerServices::IDispatchConstantAttribute::_IDispatchConstantAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.IDispatchConstantAttribute");
    System::Runtime::CompilerServices::IUnknownConstantAttribute::_IUnknownConstantAttribute = pFind_Type(_assemblyPtr, "System.Runtime.CompilerServices.IUnknownConstantAttribute");
    System::Runtime::MemoryFailPoint::_MemoryFailPoint = pFind_Type(_assemblyPtr, "System.Runtime.MemoryFailPoint");
    System::Runtime::GCLatencyMode::_GCLatencyMode = pFind_Type(_assemblyPtr, "System.Runtime.GCLatencyMode");
    System::Runtime::GCSettings::_GCSettings = pFind_Type(_assemblyPtr, "System.Runtime.GCSettings");
    System::Security::SecurityElement::_SecurityElement = pFind_Type(_assemblyPtr, "System.Security.SecurityElement");
    System::Security::XmlSyntaxException::_XmlSyntaxException = pFind_Type(_assemblyPtr, "System.Security.XmlSyntaxException");
    System::Security::Permissions::EnvironmentPermissionAccess::_EnvironmentPermissionAccess = pFind_Type(_assemblyPtr, "System.Security.Permissions.EnvironmentPermissionAccess");
    System::Security::IPermission::_IPermission = pFind_Type(_assemblyPtr, "System.Security.IPermission");
    System::Security::IStackWalk::_IStackWalk = pFind_Type(_assemblyPtr, "System.Security.IStackWalk");
    System::Security::CodeAccessPermission::_CodeAccessPermission = pFind_Type(_assemblyPtr, "System.Security.CodeAccessPermission");
    System::Security::Permissions::IUnrestrictedPermission::_IUnrestrictedPermission = pFind_Type(_assemblyPtr, "System.Security.Permissions.IUnrestrictedPermission");
    System::Security::Permissions::EnvironmentPermission::_EnvironmentPermission = pFind_Type(_assemblyPtr, "System.Security.Permissions.EnvironmentPermission");
    System::Security::Permissions::FileDialogPermissionAccess::_FileDialogPermissionAccess = pFind_Type(_assemblyPtr, "System.Security.Permissions.FileDialogPermissionAccess");
    System::Security::Permissions::FileDialogPermission::_FileDialogPermission = pFind_Type(_assemblyPtr, "System.Security.Permissions.FileDialogPermission");
    System::Security::Permissions::FileIOPermissionAccess::_FileIOPermissionAccess = pFind_Type(_assemblyPtr, "System.Security.Permissions.FileIOPermissionAccess");
    System::Security::Permissions::FileIOPermission::_FileIOPermission = pFind_Type(_assemblyPtr, "System.Security.Permissions.FileIOPermission");
    System::Security::Permissions::HostProtectionResource::_HostProtectionResource = pFind_Type(_assemblyPtr, "System.Security.Permissions.HostProtectionResource");
    System::Security::Permissions::SecurityAttribute::_SecurityAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.SecurityAttribute");
    System::Security::Permissions::CodeAccessSecurityAttribute::_CodeAccessSecurityAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.CodeAccessSecurityAttribute");
    System::Security::Permissions::HostProtectionAttribute::_HostProtectionAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.HostProtectionAttribute");
    System::Security::Permissions::IsolatedStorageContainment::_IsolatedStorageContainment = pFind_Type(_assemblyPtr, "System.Security.Permissions.IsolatedStorageContainment");
    System::Security::Permissions::IsolatedStoragePermission::_IsolatedStoragePermission = pFind_Type(_assemblyPtr, "System.Security.Permissions.IsolatedStoragePermission");
    System::Security::Permissions::IsolatedStorageFilePermission::_IsolatedStorageFilePermission = pFind_Type(_assemblyPtr, "System.Security.Permissions.IsolatedStorageFilePermission");
    System::Security::Permissions::PermissionState::_PermissionState = pFind_Type(_assemblyPtr, "System.Security.Permissions.PermissionState");
    System::Security::Permissions::SecurityAction::_SecurityAction = pFind_Type(_assemblyPtr, "System.Security.Permissions.SecurityAction");
    System::Security::Permissions::EnvironmentPermissionAttribute::_EnvironmentPermissionAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.EnvironmentPermissionAttribute");
    System::Security::Permissions::FileDialogPermissionAttribute::_FileDialogPermissionAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.FileDialogPermissionAttribute");
    System::Security::Permissions::FileIOPermissionAttribute::_FileIOPermissionAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.FileIOPermissionAttribute");
    System::Security::Permissions::KeyContainerPermissionAttribute::_KeyContainerPermissionAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.KeyContainerPermissionAttribute");
    System::Security::Permissions::PrincipalPermissionAttribute::_PrincipalPermissionAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.PrincipalPermissionAttribute");
    System::Security::Permissions::ReflectionPermissionAttribute::_ReflectionPermissionAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.ReflectionPermissionAttribute");
    System::Security::Permissions::RegistryPermissionAttribute::_RegistryPermissionAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.RegistryPermissionAttribute");
    System::Security::Permissions::SecurityPermissionAttribute::_SecurityPermissionAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.SecurityPermissionAttribute");
    System::Security::Permissions::UIPermissionAttribute::_UIPermissionAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.UIPermissionAttribute");
    System::Security::Permissions::ZoneIdentityPermissionAttribute::_ZoneIdentityPermissionAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.ZoneIdentityPermissionAttribute");
    System::Security::Permissions::StrongNameIdentityPermissionAttribute::_StrongNameIdentityPermissionAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.StrongNameIdentityPermissionAttribute");
    System::Security::Permissions::SiteIdentityPermissionAttribute::_SiteIdentityPermissionAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.SiteIdentityPermissionAttribute");
    System::Security::Permissions::UrlIdentityPermissionAttribute::_UrlIdentityPermissionAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.UrlIdentityPermissionAttribute");
    System::Security::Permissions::PublisherIdentityPermissionAttribute::_PublisherIdentityPermissionAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.PublisherIdentityPermissionAttribute");
    System::Security::Permissions::IsolatedStoragePermissionAttribute::_IsolatedStoragePermissionAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.IsolatedStoragePermissionAttribute");
    System::Security::Permissions::IsolatedStorageFilePermissionAttribute::_IsolatedStorageFilePermissionAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.IsolatedStorageFilePermissionAttribute");
    System::Security::Permissions::PermissionSetAttribute::_PermissionSetAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.PermissionSetAttribute");
    System::Security::Permissions::ReflectionPermissionFlag::_ReflectionPermissionFlag = pFind_Type(_assemblyPtr, "System.Security.Permissions.ReflectionPermissionFlag");
    System::Security::Permissions::ReflectionPermission::_ReflectionPermission = pFind_Type(_assemblyPtr, "System.Security.Permissions.ReflectionPermission");
    System::Security::Permissions::PrincipalPermission::_PrincipalPermission = pFind_Type(_assemblyPtr, "System.Security.Permissions.PrincipalPermission");
    System::Security::Permissions::SecurityPermissionFlag::_SecurityPermissionFlag = pFind_Type(_assemblyPtr, "System.Security.Permissions.SecurityPermissionFlag");
    System::Security::Permissions::SecurityPermission::_SecurityPermission = pFind_Type(_assemblyPtr, "System.Security.Permissions.SecurityPermission");
    System::Security::Permissions::SiteIdentityPermission::_SiteIdentityPermission = pFind_Type(_assemblyPtr, "System.Security.Permissions.SiteIdentityPermission");
    System::Security::Permissions::StrongNameIdentityPermission::_StrongNameIdentityPermission = pFind_Type(_assemblyPtr, "System.Security.Permissions.StrongNameIdentityPermission");
    System::Security::Permissions::StrongNamePublicKeyBlob::_StrongNamePublicKeyBlob = pFind_Type(_assemblyPtr, "System.Security.Permissions.StrongNamePublicKeyBlob");
    System::Security::Permissions::UIPermissionWindow::_UIPermissionWindow = pFind_Type(_assemblyPtr, "System.Security.Permissions.UIPermissionWindow");
    System::Security::Permissions::UIPermissionClipboard::_UIPermissionClipboard = pFind_Type(_assemblyPtr, "System.Security.Permissions.UIPermissionClipboard");
    System::Security::Permissions::UIPermission::_UIPermission = pFind_Type(_assemblyPtr, "System.Security.Permissions.UIPermission");
    System::Security::Permissions::UrlIdentityPermission::_UrlIdentityPermission = pFind_Type(_assemblyPtr, "System.Security.Permissions.UrlIdentityPermission");
    System::Security::Permissions::ZoneIdentityPermission::_ZoneIdentityPermission = pFind_Type(_assemblyPtr, "System.Security.Permissions.ZoneIdentityPermission");
    System::Security::Permissions::GacIdentityPermissionAttribute::_GacIdentityPermissionAttribute = pFind_Type(_assemblyPtr, "System.Security.Permissions.GacIdentityPermissionAttribute");
    System::Security::Permissions::GacIdentityPermission::_GacIdentityPermission = pFind_Type(_assemblyPtr, "System.Security.Permissions.GacIdentityPermission");
    System::Security::Permissions::KeyContainerPermissionFlags::_KeyContainerPermissionFlags = pFind_Type(_assemblyPtr, "System.Security.Permissions.KeyContainerPermissionFlags");
    System::Security::Permissions::KeyContainerPermissionAccessEntry::_KeyContainerPermissionAccessEntry = pFind_Type(_assemblyPtr, "System.Security.Permissions.KeyContainerPermissionAccessEntry");
    System::Security::Permissions::KeyContainerPermissionAccessEntryCollection::_KeyContainerPermissionAccessEntryCollection = pFind_Type(_assemblyPtr, "System.Security.Permissions.KeyContainerPermissionAccessEntryCollection");
    System::Security::Permissions::KeyContainerPermissionAccessEntryEnumerator::_KeyContainerPermissionAccessEntryEnumerator = pFind_Type(_assemblyPtr, "System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator");
    System::Security::Permissions::KeyContainerPermission::_KeyContainerPermission = pFind_Type(_assemblyPtr, "System.Security.Permissions.KeyContainerPermission");
    System::Security::Permissions::PublisherIdentityPermission::_PublisherIdentityPermission = pFind_Type(_assemblyPtr, "System.Security.Permissions.PublisherIdentityPermission");
    System::Security::Permissions::RegistryPermissionAccess::_RegistryPermissionAccess = pFind_Type(_assemblyPtr, "System.Security.Permissions.RegistryPermissionAccess");
    System::Security::Permissions::RegistryPermission::_RegistryPermission = pFind_Type(_assemblyPtr, "System.Security.Permissions.RegistryPermission");
    System::Security::SuppressUnmanagedCodeSecurityAttribute::_SuppressUnmanagedCodeSecurityAttribute = pFind_Type(_assemblyPtr, "System.Security.SuppressUnmanagedCodeSecurityAttribute");
    System::Security::UnverifiableCodeAttribute::_UnverifiableCodeAttribute = pFind_Type(_assemblyPtr, "System.Security.UnverifiableCodeAttribute");
    System::Security::AllowPartiallyTrustedCallersAttribute::_AllowPartiallyTrustedCallersAttribute = pFind_Type(_assemblyPtr, "System.Security.AllowPartiallyTrustedCallersAttribute");
    System::Security::SecurityCriticalScope::_SecurityCriticalScope = pFind_Type(_assemblyPtr, "System.Security.SecurityCriticalScope");
    System::Security::SecurityCriticalAttribute::_SecurityCriticalAttribute = pFind_Type(_assemblyPtr, "System.Security.SecurityCriticalAttribute");
    System::Security::SecurityTreatAsSafeAttribute::_SecurityTreatAsSafeAttribute = pFind_Type(_assemblyPtr, "System.Security.SecurityTreatAsSafeAttribute");
    System::Security::SecuritySafeCriticalAttribute::_SecuritySafeCriticalAttribute = pFind_Type(_assemblyPtr, "System.Security.SecuritySafeCriticalAttribute");
    System::Security::SecurityTransparentAttribute::_SecurityTransparentAttribute = pFind_Type(_assemblyPtr, "System.Security.SecurityTransparentAttribute");
    System::Security::HostSecurityManagerOptions::_HostSecurityManagerOptions = pFind_Type(_assemblyPtr, "System.Security.HostSecurityManagerOptions");
    System::Security::HostSecurityManager::_HostSecurityManager = pFind_Type(_assemblyPtr, "System.Security.HostSecurityManager");
    System::Security::PermissionSet::_PermissionSet = pFind_Type(_assemblyPtr, "System.Security.PermissionSet");
    System::Security::NamedPermissionSet::_NamedPermissionSet = pFind_Type(_assemblyPtr, "System.Security.NamedPermissionSet");
    System::Security::SecureString::_SecureString = pFind_Type(_assemblyPtr, "System.Security.SecureString");
    System::Security::SecurityContext::_SecurityContext = pFind_Type(_assemblyPtr, "System.Security.SecurityContext");
    System::Security::SecurityException::_SecurityException = pFind_Type(_assemblyPtr, "System.Security.SecurityException");
    System::Security::HostProtectionException::_HostProtectionException = pFind_Type(_assemblyPtr, "System.Security.HostProtectionException");
    System::Security::PolicyLevelType::_PolicyLevelType = pFind_Type(_assemblyPtr, "System.Security.PolicyLevelType");
    System::Security::SecurityManager::_SecurityManager = pFind_Type(_assemblyPtr, "System.Security.SecurityManager");
    System::Security::SecurityState::_SecurityState = pFind_Type(_assemblyPtr, "System.Security.SecurityState");
    System::Security::SecurityZone::_SecurityZone = pFind_Type(_assemblyPtr, "System.Security.SecurityZone");
    System::Security::VerificationException::_VerificationException = pFind_Type(_assemblyPtr, "System.Security.VerificationException");
    System::Runtime::Remoting::Contexts::IContextAttribute::_IContextAttribute = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Contexts.IContextAttribute");
    System::Runtime::Remoting::Contexts::IContextProperty::_IContextProperty = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Contexts.IContextProperty");
    System::Runtime::Remoting::Contexts::ContextAttribute::_ContextAttribute = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Contexts.ContextAttribute");
    System::Runtime::Remoting::Activation::IActivator::_IActivator = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Activation.IActivator");
    System::Runtime::Remoting::Messaging::IMessageSink::_IMessageSink = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.IMessageSink");
    System::Runtime::Remoting::Messaging::AsyncResult::_AsyncResult = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.AsyncResult");
    System::Runtime::Remoting::Messaging::CallContext::_CallContext = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.CallContext");
    System::Runtime::Remoting::Messaging::ILogicalThreadAffinative::_ILogicalThreadAffinative = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.ILogicalThreadAffinative");
    System::Runtime::Remoting::Messaging::LogicalCallContext::_LogicalCallContext = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.LogicalCallContext");
    System::Runtime::Remoting::Channels::ChannelServices::_ChannelServices = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.ChannelServices");
    System::Runtime::Remoting::Channels::IClientResponseChannelSinkStack::_IClientResponseChannelSinkStack = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.IClientResponseChannelSinkStack");
    System::Runtime::Remoting::Channels::IClientChannelSinkStack::_IClientChannelSinkStack = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.IClientChannelSinkStack");
    System::Runtime::Remoting::Channels::ClientChannelSinkStack::_ClientChannelSinkStack = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.ClientChannelSinkStack");
    System::Runtime::Remoting::Channels::IServerResponseChannelSinkStack::_IServerResponseChannelSinkStack = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.IServerResponseChannelSinkStack");
    System::Runtime::Remoting::Channels::IServerChannelSinkStack::_IServerChannelSinkStack = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.IServerChannelSinkStack");
    System::Runtime::Remoting::Channels::ServerChannelSinkStack::_ServerChannelSinkStack = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.ServerChannelSinkStack");
    System::Runtime::Remoting::Lifetime::ISponsor::_ISponsor = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Lifetime.ISponsor");
    System::Runtime::Remoting::Lifetime::ClientSponsor::_ClientSponsor = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Lifetime.ClientSponsor");
    System::Runtime::Remoting::WellKnownObjectMode::_WellKnownObjectMode = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.WellKnownObjectMode");
    System::Runtime::Remoting::Contexts::CrossContextDelegate::_CrossContextDelegate = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Contexts.CrossContextDelegate");
    System::Runtime::Remoting::Contexts::Context::_Context = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Contexts.Context");
    System::Runtime::Remoting::Contexts::ContextProperty::_ContextProperty = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Contexts.ContextProperty");
    System::Runtime::Remoting::Contexts::IContextPropertyActivator::_IContextPropertyActivator = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Contexts.IContextPropertyActivator");
    System::Runtime::Remoting::Channels::IChannel::_IChannel = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.IChannel");
    System::Runtime::Remoting::Channels::IChannelSender::_IChannelSender = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.IChannelSender");
    System::Runtime::Remoting::Channels::IChannelReceiver::_IChannelReceiver = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.IChannelReceiver");
    System::Runtime::Remoting::Channels::IServerChannelSinkProvider::_IServerChannelSinkProvider = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.IServerChannelSinkProvider");
    System::Runtime::Remoting::Channels::IChannelSinkBase::_IChannelSinkBase = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.IChannelSinkBase");
    System::Runtime::Remoting::Channels::IServerChannelSink::_IServerChannelSink = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.IServerChannelSink");
    System::Runtime::Remoting::Services::EnterpriseServicesHelper::_EnterpriseServicesHelper = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Services.EnterpriseServicesHelper");
    System::Runtime::Remoting::Messaging::Header::_Header = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.Header");
    System::Runtime::Remoting::Messaging::HeaderHandler::_HeaderHandler = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.HeaderHandler");
    System::Runtime::Remoting::Activation::ActivatorLevel::_ActivatorLevel = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Activation.ActivatorLevel");
    System::Runtime::Remoting::Messaging::IMessage::_IMessage = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.IMessage");
    System::Runtime::Remoting::Messaging::IMethodMessage::_IMethodMessage = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.IMethodMessage");
    System::Runtime::Remoting::Messaging::IMethodCallMessage::_IMethodCallMessage = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.IMethodCallMessage");
    System::Runtime::Remoting::Activation::IConstructionCallMessage::_IConstructionCallMessage = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Activation.IConstructionCallMessage");
    System::Runtime::Remoting::Messaging::IMethodReturnMessage::_IMethodReturnMessage = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.IMethodReturnMessage");
    System::Runtime::Remoting::Activation::IConstructionReturnMessage::_IConstructionReturnMessage = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Activation.IConstructionReturnMessage");
    System::Runtime::Remoting::Channels::IChannelReceiverHook::_IChannelReceiverHook = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.IChannelReceiverHook");
    System::Runtime::Remoting::Channels::IClientChannelSinkProvider::_IClientChannelSinkProvider = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.IClientChannelSinkProvider");
    System::Runtime::Remoting::Channels::IClientFormatterSinkProvider::_IClientFormatterSinkProvider = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.IClientFormatterSinkProvider");
    System::Runtime::Remoting::Channels::IServerFormatterSinkProvider::_IServerFormatterSinkProvider = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.IServerFormatterSinkProvider");
    System::Runtime::Remoting::Channels::IClientChannelSink::_IClientChannelSink = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.IClientChannelSink");
    System::Runtime::Remoting::Channels::ServerProcessing::_ServerProcessing = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.ServerProcessing");
    System::Runtime::Remoting::Channels::IClientFormatterSink::_IClientFormatterSink = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.IClientFormatterSink");
    System::Runtime::Remoting::Channels::IChannelDataStore::_IChannelDataStore = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.IChannelDataStore");
    System::Runtime::Remoting::Channels::ChannelDataStore::_ChannelDataStore = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.ChannelDataStore");
    System::Runtime::Remoting::Channels::ITransportHeaders::_ITransportHeaders = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.ITransportHeaders");
    System::Runtime::Remoting::Channels::TransportHeaders::_TransportHeaders = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.TransportHeaders");
    System::Runtime::Remoting::Channels::SinkProviderData::_SinkProviderData = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.SinkProviderData");
    System::Runtime::Remoting::Channels::BaseChannelObjectWithProperties::_BaseChannelObjectWithProperties = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.BaseChannelObjectWithProperties");
    System::Runtime::Remoting::Channels::BaseChannelSinkWithProperties::_BaseChannelSinkWithProperties = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.BaseChannelSinkWithProperties");
    System::Runtime::Remoting::Channels::BaseChannelWithProperties::_BaseChannelWithProperties = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.BaseChannelWithProperties");
    System::Runtime::Remoting::Contexts::IContributeClientContextSink::_IContributeClientContextSink = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Contexts.IContributeClientContextSink");
    System::Runtime::Remoting::Contexts::IContributeDynamicSink::_IContributeDynamicSink = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Contexts.IContributeDynamicSink");
    System::Runtime::Remoting::Contexts::IContributeEnvoySink::_IContributeEnvoySink = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Contexts.IContributeEnvoySink");
    System::Runtime::Remoting::Contexts::IContributeObjectSink::_IContributeObjectSink = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Contexts.IContributeObjectSink");
    System::Runtime::Remoting::Contexts::IContributeServerContextSink::_IContributeServerContextSink = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Contexts.IContributeServerContextSink");
    System::Runtime::Remoting::Contexts::IDynamicProperty::_IDynamicProperty = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Contexts.IDynamicProperty");
    System::Runtime::Remoting::Contexts::IDynamicMessageSink::_IDynamicMessageSink = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Contexts.IDynamicMessageSink");
    System::Runtime::Remoting::Lifetime::ILease::_ILease = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Lifetime.ILease");
    System::Runtime::Remoting::Messaging::IMessageCtrl::_IMessageCtrl = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.IMessageCtrl");
    System::Runtime::Remoting::Messaging::IRemotingFormatter::_IRemotingFormatter = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.IRemotingFormatter");
    System::Runtime::Remoting::Channels::ISecurableChannel::_ISecurableChannel = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Channels.ISecurableChannel");
    System::Runtime::Remoting::Lifetime::LeaseState::_LeaseState = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Lifetime.LeaseState");
    System::Runtime::Remoting::Lifetime::LifetimeServices::_LifetimeServices = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Lifetime.LifetimeServices");
    System::Runtime::Remoting::Messaging::ReturnMessage::_ReturnMessage = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.ReturnMessage");
    System::Runtime::Remoting::Messaging::MethodCall::_MethodCall = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.MethodCall");
    System::Runtime::Remoting::Messaging::ConstructionCall::_ConstructionCall = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.ConstructionCall");
    System::Runtime::Remoting::Messaging::MethodResponse::_MethodResponse = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.MethodResponse");
    System::Runtime::Serialization::Formatters::IFieldInfo::_IFieldInfo = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.Formatters.IFieldInfo");
    System::Runtime::Remoting::Messaging::ConstructionResponse::_ConstructionResponse = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.ConstructionResponse");
    System::Runtime::Remoting::Messaging::InternalMessageWrapper::_InternalMessageWrapper = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.InternalMessageWrapper");
    System::Runtime::Remoting::Messaging::MethodCallMessageWrapper::_MethodCallMessageWrapper = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.MethodCallMessageWrapper");
    System::Runtime::Remoting::Messaging::MethodReturnMessageWrapper::_MethodReturnMessageWrapper = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.MethodReturnMessageWrapper");
    System::Runtime::Remoting::ObjectHandle::_ObjectHandle = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.ObjectHandle");
    System::Runtime::Remoting::IRemotingTypeInfo::_IRemotingTypeInfo = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.IRemotingTypeInfo");
    System::Runtime::Remoting::IChannelInfo::_IChannelInfo = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.IChannelInfo");
    System::Runtime::Remoting::IEnvoyInfo::_IEnvoyInfo = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.IEnvoyInfo");
    System::Runtime::Remoting::ObjRef::_ObjRef = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.ObjRef");
    System::Runtime::Remoting::Messaging::OneWayAttribute::_OneWayAttribute = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.OneWayAttribute");
    System::Runtime::Remoting::Proxies::ProxyAttribute::_ProxyAttribute = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Proxies.ProxyAttribute");
    System::Runtime::Remoting::Proxies::RealProxy::_RealProxy = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Proxies.RealProxy");
    System::Runtime::Remoting::Metadata::SoapOption::_SoapOption = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.SoapOption");
    System::Runtime::Remoting::Metadata::XmlFieldOrderOption::_XmlFieldOrderOption = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.XmlFieldOrderOption");
    System::Runtime::Remoting::Metadata::SoapAttribute::_SoapAttribute = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.SoapAttribute");
    System::Runtime::Remoting::Metadata::SoapTypeAttribute::_SoapTypeAttribute = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.SoapTypeAttribute");
    System::Runtime::Remoting::Metadata::SoapMethodAttribute::_SoapMethodAttribute = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.SoapMethodAttribute");
    System::Runtime::Remoting::Metadata::SoapFieldAttribute::_SoapFieldAttribute = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.SoapFieldAttribute");
    System::Runtime::Remoting::Metadata::SoapParameterAttribute::_SoapParameterAttribute = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.SoapParameterAttribute");
    System::Runtime::Remoting::RemotingConfiguration::_RemotingConfiguration = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.RemotingConfiguration");
    System::Runtime::Remoting::TypeEntry::_TypeEntry = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.TypeEntry");
    System::Runtime::Remoting::ActivatedClientTypeEntry::_ActivatedClientTypeEntry = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.ActivatedClientTypeEntry");
    System::Runtime::Remoting::ActivatedServiceTypeEntry::_ActivatedServiceTypeEntry = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.ActivatedServiceTypeEntry");
    System::Runtime::Remoting::WellKnownClientTypeEntry::_WellKnownClientTypeEntry = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.WellKnownClientTypeEntry");
    System::Runtime::Remoting::WellKnownServiceTypeEntry::_WellKnownServiceTypeEntry = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.WellKnownServiceTypeEntry");
    System::Runtime::Remoting::CustomErrorsModes::_CustomErrorsModes = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.CustomErrorsModes");
    System::Runtime::Remoting::RemotingException::_RemotingException = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.RemotingException");
    System::Runtime::Remoting::ServerException::_ServerException = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.ServerException");
    System::Runtime::Remoting::RemotingTimeoutException::_RemotingTimeoutException = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.RemotingTimeoutException");
    System::Runtime::Remoting::RemotingServices::_RemotingServices = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.RemotingServices");
    System::Runtime::Remoting::InternalRemotingServices::_InternalRemotingServices = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.InternalRemotingServices");
    System::Runtime::Remoting::Messaging::MessageSurrogateFilter::_MessageSurrogateFilter = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.MessageSurrogateFilter");
    System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::_RemotingSurrogateSelector = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Messaging.RemotingSurrogateSelector");
    System::Runtime::Remoting::SoapServices::_SoapServices = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.SoapServices");
    System::Runtime::Remoting::Metadata::W3cXsd2001::ISoapXsd::_ISoapXsd = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.ISoapXsd");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapDateTime::_SoapDateTime = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapDateTime");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapDuration::_SoapDuration = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapDuration");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapTime::_SoapTime = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapTime");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapDate::_SoapDate = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapDate");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapYearMonth::_SoapYearMonth = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapYearMonth");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapYear::_SoapYear = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapYear");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapMonthDay::_SoapMonthDay = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapMonthDay");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapDay::_SoapDay = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapDay");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapMonth::_SoapMonth = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapMonth");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapHexBinary::_SoapHexBinary = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapHexBinary");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapBase64Binary::_SoapBase64Binary = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapBase64Binary");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapInteger::_SoapInteger = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapInteger");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapPositiveInteger::_SoapPositiveInteger = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapPositiveInteger");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapNonPositiveInteger::_SoapNonPositiveInteger = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapNonPositiveInteger");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapNonNegativeInteger::_SoapNonNegativeInteger = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapNonNegativeInteger");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapNegativeInteger::_SoapNegativeInteger = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapNegativeInteger");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapAnyUri::_SoapAnyUri = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapAnyUri");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapQName::_SoapQName = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapQName");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapNotation::_SoapNotation = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapNotation");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapNormalizedString::_SoapNormalizedString = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapNormalizedString");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapToken::_SoapToken = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapToken");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapLanguage::_SoapLanguage = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapLanguage");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapName::_SoapName = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapName");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapIdrefs::_SoapIdrefs = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapIdrefs");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapEntities::_SoapEntities = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapEntities");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapNmtoken::_SoapNmtoken = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapNmtoken");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapNmtokens::_SoapNmtokens = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapNmtokens");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapNcName::_SoapNcName = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapNcName");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapId::_SoapId = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapId");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapIdref::_SoapIdref = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapIdref");
    System::Runtime::Remoting::Metadata::W3cXsd2001::SoapEntity::_SoapEntity = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Metadata.W3cXsd2001.SoapEntity");
    System::Runtime::Remoting::Contexts::SynchronizationAttribute::_SynchronizationAttribute = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Contexts.SynchronizationAttribute");
    System::Runtime::Remoting::Services::ITrackingHandler::_ITrackingHandler = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Services.ITrackingHandler");
    System::Runtime::Remoting::Services::TrackingServices::_TrackingServices = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Services.TrackingServices");
    System::Runtime::Remoting::Activation::UrlAttribute::_UrlAttribute = pFind_Type(_assemblyPtr, "System.Runtime.Remoting.Activation.UrlAttribute");
    System::IO::IsolatedStorage::IsolatedStorageScope::_IsolatedStorageScope = pFind_Type(_assemblyPtr, "System.IO.IsolatedStorage.IsolatedStorageScope");
    System::IO::IsolatedStorage::IsolatedStorage::_IsolatedStorage = pFind_Type(_assemblyPtr, "System.IO.IsolatedStorage.IsolatedStorage");
    System::IO::IsolatedStorage::IsolatedStorageFile::_IsolatedStorageFile = pFind_Type(_assemblyPtr, "System.IO.IsolatedStorage.IsolatedStorageFile");
    System::IO::IsolatedStorage::IsolatedStorageFileStream::_IsolatedStorageFileStream = pFind_Type(_assemblyPtr, "System.IO.IsolatedStorage.IsolatedStorageFileStream");
    System::IO::IsolatedStorage::IsolatedStorageException::_IsolatedStorageException = pFind_Type(_assemblyPtr, "System.IO.IsolatedStorage.IsolatedStorageException");
    System::IO::IsolatedStorage::INormalizeForIsolatedStorage::_INormalizeForIsolatedStorage = pFind_Type(_assemblyPtr, "System.IO.IsolatedStorage.INormalizeForIsolatedStorage");
    System::Runtime::Serialization::Formatters::FormatterTypeStyle::_FormatterTypeStyle = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.Formatters.FormatterTypeStyle");
    System::Runtime::Serialization::Formatters::FormatterAssemblyStyle::_FormatterAssemblyStyle = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.Formatters.FormatterAssemblyStyle");
    System::Runtime::Serialization::Formatters::TypeFilterLevel::_TypeFilterLevel = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.Formatters.TypeFilterLevel");
    System::Runtime::Serialization::Formatters::ISoapMessage::_ISoapMessage = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.Formatters.ISoapMessage");
    System::Runtime::Serialization::Formatters::InternalRM::_InternalRM = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.Formatters.InternalRM");
    System::Runtime::Serialization::Formatters::InternalST::_InternalST = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.Formatters.InternalST");
    System::Runtime::Serialization::Formatters::SoapMessage::_SoapMessage = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.Formatters.SoapMessage");
    System::Runtime::Serialization::Formatters::SoapFault::_SoapFault = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.Formatters.SoapFault");
    System::Runtime::Serialization::Formatters::ServerFault::_ServerFault = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.Formatters.ServerFault");
    System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::_BinaryFormatter = pFind_Type(_assemblyPtr, "System.Runtime.Serialization.Formatters.Binary.BinaryFormatter");
    System::Runtime::InteropServices::_AssemblyBuilder::__AssemblyBuilder = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._AssemblyBuilder");
    System::Reflection::Emit::AssemblyBuilder::_AssemblyBuilder = pFind_Type(_assemblyPtr, "System.Reflection.Emit.AssemblyBuilder");
    System::Reflection::Emit::AssemblyBuilderAccess::_AssemblyBuilderAccess = pFind_Type(_assemblyPtr, "System.Reflection.Emit.AssemblyBuilderAccess");
    System::Runtime::InteropServices::_ConstructorBuilder::__ConstructorBuilder = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._ConstructorBuilder");
    System::Runtime::InteropServices::_CustomAttributeBuilder::__CustomAttributeBuilder = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._CustomAttributeBuilder");
    System::Runtime::InteropServices::_EnumBuilder::__EnumBuilder = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._EnumBuilder");
    System::Runtime::InteropServices::_EventBuilder::__EventBuilder = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._EventBuilder");
    System::Runtime::InteropServices::_FieldBuilder::__FieldBuilder = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._FieldBuilder");
    System::Runtime::InteropServices::_ILGenerator::__ILGenerator = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._ILGenerator");
    System::Runtime::InteropServices::_LocalBuilder::__LocalBuilder = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._LocalBuilder");
    System::Runtime::InteropServices::_MethodBuilder::__MethodBuilder = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._MethodBuilder");
    System::Runtime::InteropServices::_MethodRental::__MethodRental = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._MethodRental");
    System::Runtime::InteropServices::_ModuleBuilder::__ModuleBuilder = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._ModuleBuilder");
    System::Runtime::InteropServices::_ParameterBuilder::__ParameterBuilder = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._ParameterBuilder");
    System::Runtime::InteropServices::_PropertyBuilder::__PropertyBuilder = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._PropertyBuilder");
    System::Runtime::InteropServices::_SignatureHelper::__SignatureHelper = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._SignatureHelper");
    System::Runtime::InteropServices::_TypeBuilder::__TypeBuilder = pFind_Type(_assemblyPtr, "System.Runtime.InteropServices._TypeBuilder");
    System::Reflection::Emit::ConstructorBuilder::_ConstructorBuilder = pFind_Type(_assemblyPtr, "System.Reflection.Emit.ConstructorBuilder");
    System::Reflection::Emit::ILGenerator::_ILGenerator = pFind_Type(_assemblyPtr, "System.Reflection.Emit.ILGenerator");
    System::Reflection::Emit::DynamicILInfo::_DynamicILInfo = pFind_Type(_assemblyPtr, "System.Reflection.Emit.DynamicILInfo");
    System::Reflection::Emit::DynamicMethod::_DynamicMethod = pFind_Type(_assemblyPtr, "System.Reflection.Emit.DynamicMethod");
    System::Reflection::Emit::EventBuilder::_EventBuilder = pFind_Type(_assemblyPtr, "System.Reflection.Emit.EventBuilder");
    System::Reflection::Emit::EventToken::_EventToken = pFind_Type(_assemblyPtr, "System.Reflection.Emit.EventToken");
    System::Reflection::Emit::FieldBuilder::_FieldBuilder = pFind_Type(_assemblyPtr, "System.Reflection.Emit.FieldBuilder");
    System::Reflection::Emit::FieldToken::_FieldToken = pFind_Type(_assemblyPtr, "System.Reflection.Emit.FieldToken");
    System::Reflection::Emit::Label::_Label = pFind_Type(_assemblyPtr, "System.Reflection.Emit.Label");
    System::Reflection::Emit::LocalBuilder::_LocalBuilder = pFind_Type(_assemblyPtr, "System.Reflection.Emit.LocalBuilder");
    System::Reflection::Emit::MethodBuilder::_MethodBuilder = pFind_Type(_assemblyPtr, "System.Reflection.Emit.MethodBuilder");
    System::Reflection::Emit::CustomAttributeBuilder::_CustomAttributeBuilder = pFind_Type(_assemblyPtr, "System.Reflection.Emit.CustomAttributeBuilder");
    System::Reflection::Emit::MethodRental::_MethodRental = pFind_Type(_assemblyPtr, "System.Reflection.Emit.MethodRental");
    System::Reflection::Emit::MethodToken::_MethodToken = pFind_Type(_assemblyPtr, "System.Reflection.Emit.MethodToken");
    System::Reflection::Emit::ModuleBuilder::_ModuleBuilder = pFind_Type(_assemblyPtr, "System.Reflection.Emit.ModuleBuilder");
    System::Reflection::Emit::PEFileKinds::_PEFileKinds = pFind_Type(_assemblyPtr, "System.Reflection.Emit.PEFileKinds");
    System::Reflection::Emit::OpCodes::_OpCodes = pFind_Type(_assemblyPtr, "System.Reflection.Emit.OpCodes");
    System::Reflection::Emit::OpCode::_OpCode = pFind_Type(_assemblyPtr, "System.Reflection.Emit.OpCode");
    System::Reflection::Emit::OpCodeType::_OpCodeType = pFind_Type(_assemblyPtr, "System.Reflection.Emit.OpCodeType");
    System::Reflection::Emit::StackBehaviour::_StackBehaviour = pFind_Type(_assemblyPtr, "System.Reflection.Emit.StackBehaviour");
    System::Reflection::Emit::OperandType::_OperandType = pFind_Type(_assemblyPtr, "System.Reflection.Emit.OperandType");
    System::Reflection::Emit::FlowControl::_FlowControl = pFind_Type(_assemblyPtr, "System.Reflection.Emit.FlowControl");
    System::Reflection::Emit::ParameterBuilder::_ParameterBuilder = pFind_Type(_assemblyPtr, "System.Reflection.Emit.ParameterBuilder");
    System::Reflection::Emit::ParameterToken::_ParameterToken = pFind_Type(_assemblyPtr, "System.Reflection.Emit.ParameterToken");
    System::Reflection::Emit::PropertyBuilder::_PropertyBuilder = pFind_Type(_assemblyPtr, "System.Reflection.Emit.PropertyBuilder");
    System::Reflection::Emit::PropertyToken::_PropertyToken = pFind_Type(_assemblyPtr, "System.Reflection.Emit.PropertyToken");
    System::Reflection::Emit::SignatureHelper::_SignatureHelper = pFind_Type(_assemblyPtr, "System.Reflection.Emit.SignatureHelper");
    System::Reflection::Emit::SignatureToken::_SignatureToken = pFind_Type(_assemblyPtr, "System.Reflection.Emit.SignatureToken");
    System::Reflection::Emit::StringToken::_StringToken = pFind_Type(_assemblyPtr, "System.Reflection.Emit.StringToken");
    System::Reflection::Emit::PackingSize::_PackingSize = pFind_Type(_assemblyPtr, "System.Reflection.Emit.PackingSize");
    System::Reflection::Emit::TypeBuilder::_TypeBuilder = pFind_Type(_assemblyPtr, "System.Reflection.Emit.TypeBuilder");
    System::Reflection::Emit::GenericTypeParameterBuilder::_GenericTypeParameterBuilder = pFind_Type(_assemblyPtr, "System.Reflection.Emit.GenericTypeParameterBuilder");
    System::Reflection::Emit::EnumBuilder::_EnumBuilder = pFind_Type(_assemblyPtr, "System.Reflection.Emit.EnumBuilder");
    System::Reflection::Emit::TypeToken::_TypeToken = pFind_Type(_assemblyPtr, "System.Reflection.Emit.TypeToken");
    System::Reflection::Emit::UnmanagedMarshal::_UnmanagedMarshal = pFind_Type(_assemblyPtr, "System.Reflection.Emit.UnmanagedMarshal");
    System::Configuration::Assemblies::AssemblyHash::_AssemblyHash = pFind_Type(_assemblyPtr, "System.Configuration.Assemblies.AssemblyHash");
    System::Configuration::Assemblies::AssemblyHashAlgorithm::_AssemblyHashAlgorithm = pFind_Type(_assemblyPtr, "System.Configuration.Assemblies.AssemblyHashAlgorithm");
    System::Configuration::Assemblies::AssemblyVersionCompatibility::_AssemblyVersionCompatibility = pFind_Type(_assemblyPtr, "System.Configuration.Assemblies.AssemblyVersionCompatibility");
    System::Security::Cryptography::CipherMode::_CipherMode = pFind_Type(_assemblyPtr, "System.Security.Cryptography.CipherMode");
    System::Security::Cryptography::PaddingMode::_PaddingMode = pFind_Type(_assemblyPtr, "System.Security.Cryptography.PaddingMode");
    System::Security::Cryptography::KeySizes::_KeySizes = pFind_Type(_assemblyPtr, "System.Security.Cryptography.KeySizes");
    System::Security::Cryptography::CryptographicException::_CryptographicException = pFind_Type(_assemblyPtr, "System.Security.Cryptography.CryptographicException");
    System::Security::Cryptography::CryptographicUnexpectedOperationException::_CryptographicUnexpectedOperationException = pFind_Type(_assemblyPtr, "System.Security.Cryptography.CryptographicUnexpectedOperationException");
    System::Security::Cryptography::ICryptoTransform::_ICryptoTransform = pFind_Type(_assemblyPtr, "System.Security.Cryptography.ICryptoTransform");
    System::Security::Cryptography::RandomNumberGenerator::_RandomNumberGenerator = pFind_Type(_assemblyPtr, "System.Security.Cryptography.RandomNumberGenerator");
    System::Security::Cryptography::RNGCryptoServiceProvider::_RNGCryptoServiceProvider = pFind_Type(_assemblyPtr, "System.Security.Cryptography.RNGCryptoServiceProvider");
    System::Security::Cryptography::AsymmetricAlgorithm::_AsymmetricAlgorithm = pFind_Type(_assemblyPtr, "System.Security.Cryptography.AsymmetricAlgorithm");
    System::Security::Cryptography::AsymmetricKeyExchangeDeformatter::_AsymmetricKeyExchangeDeformatter = pFind_Type(_assemblyPtr, "System.Security.Cryptography.AsymmetricKeyExchangeDeformatter");
    System::Security::Cryptography::AsymmetricKeyExchangeFormatter::_AsymmetricKeyExchangeFormatter = pFind_Type(_assemblyPtr, "System.Security.Cryptography.AsymmetricKeyExchangeFormatter");
    System::Security::Cryptography::AsymmetricSignatureDeformatter::_AsymmetricSignatureDeformatter = pFind_Type(_assemblyPtr, "System.Security.Cryptography.AsymmetricSignatureDeformatter");
    System::Security::Cryptography::AsymmetricSignatureFormatter::_AsymmetricSignatureFormatter = pFind_Type(_assemblyPtr, "System.Security.Cryptography.AsymmetricSignatureFormatter");
    System::Security::Cryptography::FromBase64TransformMode::_FromBase64TransformMode = pFind_Type(_assemblyPtr, "System.Security.Cryptography.FromBase64TransformMode");
    System::Security::Cryptography::ToBase64Transform::_ToBase64Transform = pFind_Type(_assemblyPtr, "System.Security.Cryptography.ToBase64Transform");
    System::Security::Cryptography::FromBase64Transform::_FromBase64Transform = pFind_Type(_assemblyPtr, "System.Security.Cryptography.FromBase64Transform");
    System::Security::Cryptography::CryptoAPITransform::_CryptoAPITransform = pFind_Type(_assemblyPtr, "System.Security.Cryptography.CryptoAPITransform");
    System::Security::Cryptography::CspProviderFlags::_CspProviderFlags = pFind_Type(_assemblyPtr, "System.Security.Cryptography.CspProviderFlags");
    System::Security::Cryptography::CspParameters::_CspParameters = pFind_Type(_assemblyPtr, "System.Security.Cryptography.CspParameters");
    System::Security::Cryptography::CryptoConfig::_CryptoConfig = pFind_Type(_assemblyPtr, "System.Security.Cryptography.CryptoConfig");
    System::Security::Cryptography::CryptoStreamMode::_CryptoStreamMode = pFind_Type(_assemblyPtr, "System.Security.Cryptography.CryptoStreamMode");
    System::Security::Cryptography::CryptoStream::_CryptoStream = pFind_Type(_assemblyPtr, "System.Security.Cryptography.CryptoStream");
    System::Security::Cryptography::SymmetricAlgorithm::_SymmetricAlgorithm = pFind_Type(_assemblyPtr, "System.Security.Cryptography.SymmetricAlgorithm");
    System::Security::Cryptography::DES::_DES = pFind_Type(_assemblyPtr, "System.Security.Cryptography.DES");
    System::Security::Cryptography::DESCryptoServiceProvider::_DESCryptoServiceProvider = pFind_Type(_assemblyPtr, "System.Security.Cryptography.DESCryptoServiceProvider");
    System::Security::Cryptography::DeriveBytes::_DeriveBytes = pFind_Type(_assemblyPtr, "System.Security.Cryptography.DeriveBytes");
    System::Security::Cryptography::DSAParameters::_DSAParameters = pFind_Type(_assemblyPtr, "System.Security.Cryptography.DSAParameters");
    System::Security::Cryptography::DSA::_DSA = pFind_Type(_assemblyPtr, "System.Security.Cryptography.DSA");
    System::Security::Cryptography::ICspAsymmetricAlgorithm::_ICspAsymmetricAlgorithm = pFind_Type(_assemblyPtr, "System.Security.Cryptography.ICspAsymmetricAlgorithm");
    System::Security::Cryptography::DSACryptoServiceProvider::_DSACryptoServiceProvider = pFind_Type(_assemblyPtr, "System.Security.Cryptography.DSACryptoServiceProvider");
    System::Security::Cryptography::DSASignatureDeformatter::_DSASignatureDeformatter = pFind_Type(_assemblyPtr, "System.Security.Cryptography.DSASignatureDeformatter");
    System::Security::Cryptography::DSASignatureFormatter::_DSASignatureFormatter = pFind_Type(_assemblyPtr, "System.Security.Cryptography.DSASignatureFormatter");
    System::Security::Cryptography::HashAlgorithm::_HashAlgorithm = pFind_Type(_assemblyPtr, "System.Security.Cryptography.HashAlgorithm");
    System::Security::Cryptography::KeyedHashAlgorithm::_KeyedHashAlgorithm = pFind_Type(_assemblyPtr, "System.Security.Cryptography.KeyedHashAlgorithm");
    System::Security::Cryptography::HMAC::_HMAC = pFind_Type(_assemblyPtr, "System.Security.Cryptography.HMAC");
    System::Security::Cryptography::HMACMD5::_HMACMD5 = pFind_Type(_assemblyPtr, "System.Security.Cryptography.HMACMD5");
    System::Security::Cryptography::HMACRIPEMD160::_HMACRIPEMD160 = pFind_Type(_assemblyPtr, "System.Security.Cryptography.HMACRIPEMD160");
    System::Security::Cryptography::HMACSHA1::_HMACSHA1 = pFind_Type(_assemblyPtr, "System.Security.Cryptography.HMACSHA1");
    System::Security::Cryptography::HMACSHA256::_HMACSHA256 = pFind_Type(_assemblyPtr, "System.Security.Cryptography.HMACSHA256");
    System::Security::Cryptography::HMACSHA384::_HMACSHA384 = pFind_Type(_assemblyPtr, "System.Security.Cryptography.HMACSHA384");
    System::Security::Cryptography::HMACSHA512::_HMACSHA512 = pFind_Type(_assemblyPtr, "System.Security.Cryptography.HMACSHA512");
    System::Security::Cryptography::KeyNumber::_KeyNumber = pFind_Type(_assemblyPtr, "System.Security.Cryptography.KeyNumber");
    System::Security::Cryptography::CspKeyContainerInfo::_CspKeyContainerInfo = pFind_Type(_assemblyPtr, "System.Security.Cryptography.CspKeyContainerInfo");
    System::Security::Cryptography::MACTripleDES::_MACTripleDES = pFind_Type(_assemblyPtr, "System.Security.Cryptography.MACTripleDES");
    System::Security::Cryptography::MD5::_MD5 = pFind_Type(_assemblyPtr, "System.Security.Cryptography.MD5");
    System::Security::Cryptography::MD5CryptoServiceProvider::_MD5CryptoServiceProvider = pFind_Type(_assemblyPtr, "System.Security.Cryptography.MD5CryptoServiceProvider");
    System::Security::Cryptography::MaskGenerationMethod::_MaskGenerationMethod = pFind_Type(_assemblyPtr, "System.Security.Cryptography.MaskGenerationMethod");
    System::Security::Cryptography::PasswordDeriveBytes::_PasswordDeriveBytes = pFind_Type(_assemblyPtr, "System.Security.Cryptography.PasswordDeriveBytes");
    System::Security::Cryptography::PKCS1MaskGenerationMethod::_PKCS1MaskGenerationMethod = pFind_Type(_assemblyPtr, "System.Security.Cryptography.PKCS1MaskGenerationMethod");
    System::Security::Cryptography::RC2::_RC2 = pFind_Type(_assemblyPtr, "System.Security.Cryptography.RC2");
    System::Security::Cryptography::RC2CryptoServiceProvider::_RC2CryptoServiceProvider = pFind_Type(_assemblyPtr, "System.Security.Cryptography.RC2CryptoServiceProvider");
    System::Security::Cryptography::Rfc2898DeriveBytes::_Rfc2898DeriveBytes = pFind_Type(_assemblyPtr, "System.Security.Cryptography.Rfc2898DeriveBytes");
    System::Security::Cryptography::RIPEMD160::_RIPEMD160 = pFind_Type(_assemblyPtr, "System.Security.Cryptography.RIPEMD160");
    System::Security::Cryptography::RIPEMD160Managed::_RIPEMD160Managed = pFind_Type(_assemblyPtr, "System.Security.Cryptography.RIPEMD160Managed");
    System::Security::Cryptography::RSAParameters::_RSAParameters = pFind_Type(_assemblyPtr, "System.Security.Cryptography.RSAParameters");
    System::Security::Cryptography::RSA::_RSA = pFind_Type(_assemblyPtr, "System.Security.Cryptography.RSA");
    System::Security::Cryptography::RSACryptoServiceProvider::_RSACryptoServiceProvider = pFind_Type(_assemblyPtr, "System.Security.Cryptography.RSACryptoServiceProvider");
    System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter::_RSAOAEPKeyExchangeDeformatter = pFind_Type(_assemblyPtr, "System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter");
    System::Security::Cryptography::RSAOAEPKeyExchangeFormatter::_RSAOAEPKeyExchangeFormatter = pFind_Type(_assemblyPtr, "System.Security.Cryptography.RSAOAEPKeyExchangeFormatter");
    System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::_RSAPKCS1KeyExchangeDeformatter = pFind_Type(_assemblyPtr, "System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter");
    System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::_RSAPKCS1KeyExchangeFormatter = pFind_Type(_assemblyPtr, "System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter");
    System::Security::Cryptography::RSAPKCS1SignatureDeformatter::_RSAPKCS1SignatureDeformatter = pFind_Type(_assemblyPtr, "System.Security.Cryptography.RSAPKCS1SignatureDeformatter");
    System::Security::Cryptography::RSAPKCS1SignatureFormatter::_RSAPKCS1SignatureFormatter = pFind_Type(_assemblyPtr, "System.Security.Cryptography.RSAPKCS1SignatureFormatter");
    System::Security::Cryptography::Rijndael::_Rijndael = pFind_Type(_assemblyPtr, "System.Security.Cryptography.Rijndael");
    System::Security::Cryptography::RijndaelManaged::_RijndaelManaged = pFind_Type(_assemblyPtr, "System.Security.Cryptography.RijndaelManaged");
    System::Security::Cryptography::RijndaelManagedTransform::_RijndaelManagedTransform = pFind_Type(_assemblyPtr, "System.Security.Cryptography.RijndaelManagedTransform");
    System::Security::Cryptography::SHA1::_SHA1 = pFind_Type(_assemblyPtr, "System.Security.Cryptography.SHA1");
    System::Security::Cryptography::SHA1CryptoServiceProvider::_SHA1CryptoServiceProvider = pFind_Type(_assemblyPtr, "System.Security.Cryptography.SHA1CryptoServiceProvider");
    System::Security::Cryptography::SHA1Managed::_SHA1Managed = pFind_Type(_assemblyPtr, "System.Security.Cryptography.SHA1Managed");
    System::Security::Cryptography::SHA256::_SHA256 = pFind_Type(_assemblyPtr, "System.Security.Cryptography.SHA256");
    System::Security::Cryptography::SHA256Managed::_SHA256Managed = pFind_Type(_assemblyPtr, "System.Security.Cryptography.SHA256Managed");
    System::Security::Cryptography::SHA384::_SHA384 = pFind_Type(_assemblyPtr, "System.Security.Cryptography.SHA384");
    System::Security::Cryptography::SHA384Managed::_SHA384Managed = pFind_Type(_assemblyPtr, "System.Security.Cryptography.SHA384Managed");
    System::Security::Cryptography::SHA512::_SHA512 = pFind_Type(_assemblyPtr, "System.Security.Cryptography.SHA512");
    System::Security::Cryptography::SHA512Managed::_SHA512Managed = pFind_Type(_assemblyPtr, "System.Security.Cryptography.SHA512Managed");
    System::Security::Cryptography::SignatureDescription::_SignatureDescription = pFind_Type(_assemblyPtr, "System.Security.Cryptography.SignatureDescription");
    System::Security::Cryptography::TripleDES::_TripleDES = pFind_Type(_assemblyPtr, "System.Security.Cryptography.TripleDES");
    System::Security::Cryptography::TripleDESCryptoServiceProvider::_TripleDESCryptoServiceProvider = pFind_Type(_assemblyPtr, "System.Security.Cryptography.TripleDESCryptoServiceProvider");
    System::Security::Cryptography::X509Certificates::X509ContentType::_X509ContentType = pFind_Type(_assemblyPtr, "System.Security.Cryptography.X509Certificates.X509ContentType");
    System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::_X509KeyStorageFlags = pFind_Type(_assemblyPtr, "System.Security.Cryptography.X509Certificates.X509KeyStorageFlags");
    System::Security::Cryptography::X509Certificates::X509Certificate::_X509Certificate = pFind_Type(_assemblyPtr, "System.Security.Cryptography.X509Certificates.X509Certificate");
    System::Security::AccessControl::AceType::_AceType = pFind_Type(_assemblyPtr, "System.Security.AccessControl.AceType");
    System::Security::AccessControl::AceFlags::_AceFlags = pFind_Type(_assemblyPtr, "System.Security.AccessControl.AceFlags");
    System::Security::AccessControl::GenericAce::_GenericAce = pFind_Type(_assemblyPtr, "System.Security.AccessControl.GenericAce");
    System::Security::AccessControl::KnownAce::_KnownAce = pFind_Type(_assemblyPtr, "System.Security.AccessControl.KnownAce");
    System::Security::AccessControl::CustomAce::_CustomAce = pFind_Type(_assemblyPtr, "System.Security.AccessControl.CustomAce");
    System::Security::AccessControl::CompoundAceType::_CompoundAceType = pFind_Type(_assemblyPtr, "System.Security.AccessControl.CompoundAceType");
    System::Security::AccessControl::CompoundAce::_CompoundAce = pFind_Type(_assemblyPtr, "System.Security.AccessControl.CompoundAce");
    System::Security::AccessControl::AceQualifier::_AceQualifier = pFind_Type(_assemblyPtr, "System.Security.AccessControl.AceQualifier");
    System::Security::AccessControl::QualifiedAce::_QualifiedAce = pFind_Type(_assemblyPtr, "System.Security.AccessControl.QualifiedAce");
    System::Security::AccessControl::CommonAce::_CommonAce = pFind_Type(_assemblyPtr, "System.Security.AccessControl.CommonAce");
    System::Security::AccessControl::ObjectAceFlags::_ObjectAceFlags = pFind_Type(_assemblyPtr, "System.Security.AccessControl.ObjectAceFlags");
    System::Security::AccessControl::ObjectAce::_ObjectAce = pFind_Type(_assemblyPtr, "System.Security.AccessControl.ObjectAce");
    System::Security::AccessControl::AceEnumerator::_AceEnumerator = pFind_Type(_assemblyPtr, "System.Security.AccessControl.AceEnumerator");
    System::Security::AccessControl::GenericAcl::_GenericAcl = pFind_Type(_assemblyPtr, "System.Security.AccessControl.GenericAcl");
    System::Security::AccessControl::RawAcl::_RawAcl = pFind_Type(_assemblyPtr, "System.Security.AccessControl.RawAcl");
    System::Security::AccessControl::CommonAcl::_CommonAcl = pFind_Type(_assemblyPtr, "System.Security.AccessControl.CommonAcl");
    System::Security::AccessControl::SystemAcl::_SystemAcl = pFind_Type(_assemblyPtr, "System.Security.AccessControl.SystemAcl");
    System::Security::AccessControl::DiscretionaryAcl::_DiscretionaryAcl = pFind_Type(_assemblyPtr, "System.Security.AccessControl.DiscretionaryAcl");
    System::Security::AccessControl::CryptoKeyRights::_CryptoKeyRights = pFind_Type(_assemblyPtr, "System.Security.AccessControl.CryptoKeyRights");
    System::Security::AccessControl::AuthorizationRule::_AuthorizationRule = pFind_Type(_assemblyPtr, "System.Security.AccessControl.AuthorizationRule");
    System::Security::AccessControl::AccessRule::_AccessRule = pFind_Type(_assemblyPtr, "System.Security.AccessControl.AccessRule");
    System::Security::AccessControl::CryptoKeyAccessRule::_CryptoKeyAccessRule = pFind_Type(_assemblyPtr, "System.Security.AccessControl.CryptoKeyAccessRule");
    System::Security::AccessControl::AuditRule::_AuditRule = pFind_Type(_assemblyPtr, "System.Security.AccessControl.AuditRule");
    System::Security::AccessControl::CryptoKeyAuditRule::_CryptoKeyAuditRule = pFind_Type(_assemblyPtr, "System.Security.AccessControl.CryptoKeyAuditRule");
    System::Security::AccessControl::ObjectSecurity::_ObjectSecurity = pFind_Type(_assemblyPtr, "System.Security.AccessControl.ObjectSecurity");
    System::Security::AccessControl::CommonObjectSecurity::_CommonObjectSecurity = pFind_Type(_assemblyPtr, "System.Security.AccessControl.CommonObjectSecurity");
    System::Security::AccessControl::NativeObjectSecurity::_NativeObjectSecurity = pFind_Type(_assemblyPtr, "System.Security.AccessControl.NativeObjectSecurity");
    System::Security::AccessControl::CryptoKeySecurity::_CryptoKeySecurity = pFind_Type(_assemblyPtr, "System.Security.AccessControl.CryptoKeySecurity");
    System::Security::AccessControl::InheritanceFlags::_InheritanceFlags = pFind_Type(_assemblyPtr, "System.Security.AccessControl.InheritanceFlags");
    System::Security::AccessControl::PropagationFlags::_PropagationFlags = pFind_Type(_assemblyPtr, "System.Security.AccessControl.PropagationFlags");
    System::Security::AccessControl::AuditFlags::_AuditFlags = pFind_Type(_assemblyPtr, "System.Security.AccessControl.AuditFlags");
    System::Security::AccessControl::SecurityInfos::_SecurityInfos = pFind_Type(_assemblyPtr, "System.Security.AccessControl.SecurityInfos");
    System::Security::AccessControl::ResourceType::_ResourceType = pFind_Type(_assemblyPtr, "System.Security.AccessControl.ResourceType");
    System::Security::AccessControl::AccessControlSections::_AccessControlSections = pFind_Type(_assemblyPtr, "System.Security.AccessControl.AccessControlSections");
    System::Security::AccessControl::AccessControlActions::_AccessControlActions = pFind_Type(_assemblyPtr, "System.Security.AccessControl.AccessControlActions");
    System::Security::AccessControl::EventWaitHandleRights::_EventWaitHandleRights = pFind_Type(_assemblyPtr, "System.Security.AccessControl.EventWaitHandleRights");
    System::Security::AccessControl::EventWaitHandleAccessRule::_EventWaitHandleAccessRule = pFind_Type(_assemblyPtr, "System.Security.AccessControl.EventWaitHandleAccessRule");
    System::Security::AccessControl::EventWaitHandleAuditRule::_EventWaitHandleAuditRule = pFind_Type(_assemblyPtr, "System.Security.AccessControl.EventWaitHandleAuditRule");
    System::Security::AccessControl::EventWaitHandleSecurity::_EventWaitHandleSecurity = pFind_Type(_assemblyPtr, "System.Security.AccessControl.EventWaitHandleSecurity");
    System::Security::AccessControl::FileSystemRights::_FileSystemRights = pFind_Type(_assemblyPtr, "System.Security.AccessControl.FileSystemRights");
    System::Security::AccessControl::FileSystemAccessRule::_FileSystemAccessRule = pFind_Type(_assemblyPtr, "System.Security.AccessControl.FileSystemAccessRule");
    System::Security::AccessControl::FileSystemAuditRule::_FileSystemAuditRule = pFind_Type(_assemblyPtr, "System.Security.AccessControl.FileSystemAuditRule");
    System::Security::AccessControl::FileSystemSecurity::_FileSystemSecurity = pFind_Type(_assemblyPtr, "System.Security.AccessControl.FileSystemSecurity");
    System::Security::AccessControl::FileSecurity::_FileSecurity = pFind_Type(_assemblyPtr, "System.Security.AccessControl.FileSecurity");
    System::Security::AccessControl::DirectorySecurity::_DirectorySecurity = pFind_Type(_assemblyPtr, "System.Security.AccessControl.DirectorySecurity");
    System::Security::AccessControl::MutexRights::_MutexRights = pFind_Type(_assemblyPtr, "System.Security.AccessControl.MutexRights");
    System::Security::AccessControl::MutexAccessRule::_MutexAccessRule = pFind_Type(_assemblyPtr, "System.Security.AccessControl.MutexAccessRule");
    System::Security::AccessControl::MutexAuditRule::_MutexAuditRule = pFind_Type(_assemblyPtr, "System.Security.AccessControl.MutexAuditRule");
    System::Security::AccessControl::MutexSecurity::_MutexSecurity = pFind_Type(_assemblyPtr, "System.Security.AccessControl.MutexSecurity");
    System::Security::AccessControl::AccessControlModification::_AccessControlModification = pFind_Type(_assemblyPtr, "System.Security.AccessControl.AccessControlModification");
    System::Security::AccessControl::DirectoryObjectSecurity::_DirectoryObjectSecurity = pFind_Type(_assemblyPtr, "System.Security.AccessControl.DirectoryObjectSecurity");
    System::Security::AccessControl::PrivilegeNotHeldException::_PrivilegeNotHeldException = pFind_Type(_assemblyPtr, "System.Security.AccessControl.PrivilegeNotHeldException");
    System::Security::AccessControl::RegistryRights::_RegistryRights = pFind_Type(_assemblyPtr, "System.Security.AccessControl.RegistryRights");
    System::Security::AccessControl::RegistryAccessRule::_RegistryAccessRule = pFind_Type(_assemblyPtr, "System.Security.AccessControl.RegistryAccessRule");
    System::Security::AccessControl::RegistryAuditRule::_RegistryAuditRule = pFind_Type(_assemblyPtr, "System.Security.AccessControl.RegistryAuditRule");
    System::Security::AccessControl::RegistrySecurity::_RegistrySecurity = pFind_Type(_assemblyPtr, "System.Security.AccessControl.RegistrySecurity");
    System::Security::AccessControl::AccessControlType::_AccessControlType = pFind_Type(_assemblyPtr, "System.Security.AccessControl.AccessControlType");
    System::Security::AccessControl::ObjectAccessRule::_ObjectAccessRule = pFind_Type(_assemblyPtr, "System.Security.AccessControl.ObjectAccessRule");
    System::Security::AccessControl::ObjectAuditRule::_ObjectAuditRule = pFind_Type(_assemblyPtr, "System.Security.AccessControl.ObjectAuditRule");
    System::Security::AccessControl::AuthorizationRuleCollection::_AuthorizationRuleCollection = pFind_Type(_assemblyPtr, "System.Security.AccessControl.AuthorizationRuleCollection");
    System::Security::AccessControl::ControlFlags::_ControlFlags = pFind_Type(_assemblyPtr, "System.Security.AccessControl.ControlFlags");
    System::Security::AccessControl::GenericSecurityDescriptor::_GenericSecurityDescriptor = pFind_Type(_assemblyPtr, "System.Security.AccessControl.GenericSecurityDescriptor");
    System::Security::AccessControl::RawSecurityDescriptor::_RawSecurityDescriptor = pFind_Type(_assemblyPtr, "System.Security.AccessControl.RawSecurityDescriptor");
    System::Security::AccessControl::CommonSecurityDescriptor::_CommonSecurityDescriptor = pFind_Type(_assemblyPtr, "System.Security.AccessControl.CommonSecurityDescriptor");
    System::Security::Principal::IdentityReference::_IdentityReference = pFind_Type(_assemblyPtr, "System.Security.Principal.IdentityReference");
    System::Security::Principal::IdentityReferenceCollection::_IdentityReferenceCollection = pFind_Type(_assemblyPtr, "System.Security.Principal.IdentityReferenceCollection");
    System::Security::Principal::NTAccount::_NTAccount = pFind_Type(_assemblyPtr, "System.Security.Principal.NTAccount");
    System::Security::Principal::WellKnownSidType::_WellKnownSidType = pFind_Type(_assemblyPtr, "System.Security.Principal.WellKnownSidType");
    System::Security::Principal::SecurityIdentifier::_SecurityIdentifier = pFind_Type(_assemblyPtr, "System.Security.Principal.SecurityIdentifier");
    System::Security::Principal::IdentityNotMappedException::_IdentityNotMappedException = pFind_Type(_assemblyPtr, "System.Security.Principal.IdentityNotMappedException");
    System::Runtime::Versioning::ResourceConsumptionAttribute::_ResourceConsumptionAttribute = pFind_Type(_assemblyPtr, "System.Runtime.Versioning.ResourceConsumptionAttribute");
    System::Runtime::Versioning::ResourceExposureAttribute::_ResourceExposureAttribute = pFind_Type(_assemblyPtr, "System.Runtime.Versioning.ResourceExposureAttribute");
    System::Runtime::Versioning::ResourceScope::_ResourceScope = pFind_Type(_assemblyPtr, "System.Runtime.Versioning.ResourceScope");
    System::Runtime::Versioning::VersioningHelper::_VersioningHelper = pFind_Type(_assemblyPtr, "System.Runtime.Versioning.VersioningHelper");
}