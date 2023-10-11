# C++ FX
A tool that fetches the exchange rates of various currencies against the US Dollar, and writes them to a local text file.

## Usage
The tool fetches exchange rate data from `https://currencybeacon.com/`. The script must be run to get the data with your API key set as an environment variable in the current process. You can obtain an API Key by signing up to the site.

Unix systems:
```sh
export API_KEY=your_api_Key
```

Powershell:
```powershell
$env:API_KEY=your_api_key
```

Once you've set your API KEY, all that's left is to run the binary:
```sh
.\bin\main
```

## Implementation
1. We use `cURL` to fetch data from the API endpoint.
2. The data is received as a JSON, which we then parse and write to a local file.
