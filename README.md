# denyattach

Tell macOS that you don't want debuggers to be allowed to attach to a process.

## Build and Install

Make sure you have developer tools installed and execute:

```
cc denyattach.c -o denyattach
```

Then move `denyattach` to a convenient location on your `$PATH`.

## Usage

```bash
denyattach <program> [<args> ...]
```

Example:

```bash
denyattach ls -l
```

## License

MIT, see [LICENSE](LICENSE).
